#include <bits/stdc++.h>
#define ll long long int
#define tc while (t--)
using namespace std;

vector<int> isPrime(1e7 + 1, 1), md(1e7 + 1);
void mdiv()
{
    for (int i = 0; i < 1e7 + 1; i++)
    {
        md[i] = i;
    }

    for (int i = 2; i * i <= 1e7 + 1; i++)
    {
        for (int j = i * i; j < 1e7 + 1; j += i)
        {
            if (md[j] == j)
            {
                md[j] = i;
            }
        }
    }
}

void soe()
{
    int maxN = 1e7;
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

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
        int l, r;
        cin >> l >> r;
        bool f = 1;
        for (int i = l; i <= r; i++)
        {
            if (md[i] != i)
            {
                f = 0;
                cout << md[i] << " " << i - md[i] << endl;
                return;
            }
        }

        if (f)
        {
            cout << -1 << endl;
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // soe();
    mdiv();
    int t;
    cin >> t;
    tc
    {
        sol s;
        s.solve();
    }
    return 0;
}