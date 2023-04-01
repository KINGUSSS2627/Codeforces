#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int add(int x, int y)
{
    return ((x + y) % MOD + MOD) % MOD;
}

int mul(int x, int y)
{
    return x * 1ll * y % MOD;
}

int binpow(int x, int y)
{
    int z = 1;
    while (y)
    {
        if (y % 2 == 1)
            z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

int inv(int x)
{
    return binpow(x, MOD - 2);
}

int divide(int x, int y)
{
    return mul(x, inv(y));
}

void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n / 6; i++)
    {
        ans = mul(ans, divide(i + n / 6, i));
    }

    for (int j = 0; j < n / 3; j++)
    {
        vector<int> v(3);
        for (auto &it : v)
        {
            cin >> it;
        }
        int minn = *min_element(v.begin(), v.end());
        int cnt = count(v.begin(), v.end(), minn);
        ans = mul(ans, cnt);
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}
