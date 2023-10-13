#include <bits/stdc++.h>
#define ll long long int
#define tc while (t--)
using namespace std;
class sol
{
    int n, k, key, m;
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
        vp.resize(n);
        for (auto &it : vp)
        {
            cin >> it.first >> it.second;
        }
    }

    void invc()
    {
        cin >> n >> k;
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
    void solve()
    {
        vector<int> v(n);
        vector<pair<int, int>> val;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            val.push_back({v[i], i});
        }
        sort(val.begin(), val.end());
        vector<pair<int, int>> val_min(k + 1, {1e9, 1e9}), val_max(k + 1, {-1, -1}), pref(n + 1, {INT_MAX, INT_MIN});
        for (int i = n - 1; i >= 0; i--)
        {
            pref[i].first = min(pref[i + 1].first, val[i].second);
            pref[i].second = max(pref[i + 1].second, val[i].second);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            val_min[val[i].first].first = min(val_min[val[i].first].first, pref[i].first);
            val_min[val[i].first].second = min(val_min[val[i].first].second, pref[i].first);
        }
        for (int i = 0; i < n; i++)
        {
            val_max[val[i].first].first = max(val_max[val[i].first].first, pref[i].second);
            val_max[val[i].first].second = max(val_max[val[i].first].second, pref[i].second);
        }

        for (int i = 1; i <= k; i++)
        {
            int ans = (abs(val_max[i].first - val_min[i].first) + 1) + (abs(val_max[i].second - val_min[i].second) + 1);
            if (ans == 2e9 + 4)
            {
                cout << 0 << " ";
            }
            else
                cout << ans << " ";
        }
        cout << endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        sol s;
        s.solve();
    }
    return 0;
}