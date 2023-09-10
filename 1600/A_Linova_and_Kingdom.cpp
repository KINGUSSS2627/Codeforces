#include <bits/stdc++.h>
#define ll long long int
#define tc while (t--)
using namespace std;
class sol
{
    int n, m, k;
    vector<int> v1;
    vector<vector<int>> vv;
    vector<pair<int, int>> vp;
    const int MOD = 1e9 + 7;
    int POW(int a, int b)
    {
        int ans = 1;
        while (b)
        {
            if (b & 1)
            {
                ans = ((ans % MOD) * (a % MOD)) % MOD;
                b--;
            }
            a = ((a % MOD) * (a % MOD)) % MOD;
            b /= 2;
        }
        return ans;
    }
    int ADD(int a, int b)
    {
        return (a % MOD + b % MOD) % MOD;
    }
    int MUL(int a, int b)
    {
        return ((a % MOD) * (b % MOD)) % MOD;
    }
    int DIV(int a, int b)
    {
        int INV = POW(b, MOD - 2);
        return MUL(a, INV);
    }
    int NcR(int n, int r)
    {
        if (n < r)
        {
            return 0;
        }
        int p = 1, k = 1;
        if (n - r < r)
        {
            r = n - r;
        }
        if (r != 0)
        {
            while (r)
            {
                p = MUL(p, r);
                k = MUL(k, r);
                int m = __gcd(p, k);
                p = DIV(p, MOD);
                k = DIV(k, MOD);
                n--;
                r--;
            }
        }
        else
            p = 1;
        return p;
    }
    // This is single array v1
    void inv1()
    {
        cin >> n;
        v1.resize(n, 0);
        for (auto &it : v1)
        {
            cin >> it;
        }
    }
    // This is array vv n*m
    void inv2()
    {
        cin >> n >> m;
        vv.resize(n, vector<int>(m, 0));
        for (auto &it1 : vv)
        {
            for (auto &it : it1)
            {
                cin >> it;
            }
        }
    }
    // This is array of pair vp n
    void invp()
    {
        cin >> n;
        vp.resize(n);
        for (auto &it : vp)
        {
            cin >> it.first >> it.second;
        }
    }

    vector<vector<int>> adj;

    void invc()
    {
        cin >> n >> k;
        vp.resize(n);
        adj.resize(n + 1);

        for (auto &it : vp)
        {
            cin >> it.first >> it.second;
            adj[it.first].push_back(it.second);
            adj[it.second].push_back(it.first);
        }
    }

public:
    sol()
    {
        // Take input here
        // inv1();
        // inv2();
        // invp();
        invc();
    }

    void dfs(int ind, int cnt, vector<int> &dep, vector<int> &child_cnt)
    {

        dep[ind] = cnt;
        child_cnt[ind] += adj[ind].size();
        if (ind != 1)
        {
            child_cnt[ind]--;
        }
        for (auto &it : adj[ind])
        {
            if (!dep[it])
            {
                dfs(it, cnt + 1, dep, child_cnt);
                child_cnt[ind] += child_cnt[it];
            }
        }
    }

    void solve()
    {
        int cnt = 1;

        vector<int> dep(n + 1, 0);
        vector<int> child_cnt(n + 1, 0);
        dfs(1, cnt, dep, child_cnt);

        priority_queue<int> pq;

        for (int i = 1; i <= n; i++)
        {
            // cout << dep[i] << " " << par[i] << " " << child_cnt[i] << endl;
            pq.push(dep[i] - child_cnt[i]);
        }

        // K lene hai
        // ek line mai hua to minus karo child

        ll ans = 0, k1 = k;

        while (k1--)
        {
            auto curr = pq.top();
            pq.pop();
            ans += curr;
        }

        cout << ans - k << endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    tc
    {
        sol s;
        s.solve();
    }
    return 0;
}