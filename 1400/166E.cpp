#include <bits/stdc++.h>
#define int long long
using namespace std;

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
int SUB(int a, int b)
{
    return (a % MOD - b % MOD + MOD) % MOD;
}
int MUL(int a, int b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

void solve()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << 3 << endl;
    }
    else if (n == 3)
    {
        cout << 6 << endl;
    }
    else
    {
        int prev = 6, curr, poww = 9;
        for (int i = 4; i <= n; i++)
        { 
            poww = MUL(poww, 3);
            curr = SUB(poww, prev);
            prev = curr;
        }

        cout << prev % MOD << endl;
    }
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}