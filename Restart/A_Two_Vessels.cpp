#include <bits/stdc++.h>
#define ll long long int
#define tc while (t--)
using namespace std;
class sol
{
    int n, m, key;
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

public:
    sol()
    {
        // Take input here
        // inv1();
        // inv2();
        // invp();
    }
    void solve()
    {
        int a, b, c;
        cin >> a >> b >> c;
        float d = abs(b - a);
        d /= 2.0;
        cout << ceil(d / (1.0 * c)) << endl;
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