//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int MOD = 6;
int MUL(int a, int b, int MOD)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}
int POW(int a, int b, int MOD)
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

int DIV(int a, int b, int MOD)
{
    int INV = POW(b, MOD - 2, MOD);
    return MUL(a, INV, MOD);
}

void solve()
{
    int n;
    cin >> n >> MOD;
    deque<int> dq;

    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        dq.push_back(it);
        mul = MUL(mul, it, MOD);
    }
    string s;
    cin >> s;

    for (int k = 0; k < n; k++)
    {
        cout << mul % MOD << " ";
        if (s[k] == 'L')
        {
            int gcd = __gcd(mul, (*dq.begin()));
            mul = DIV(mul / gcd, (*dq.begin()) / gcd, MOD);
            dq.pop_front();
        }
        else
        {
            int gcd = __gcd(mul, (dq.back()));
            mul = DIV(mul / gcd, dq.back() / gcd, MOD);
            dq.pop_back();
        }
    }
    cout << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
