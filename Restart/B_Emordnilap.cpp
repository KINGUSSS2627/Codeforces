#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
const int mod = 1e9 + 7;
vector<int> fact(1e6 + 1, 0);
void f()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= 1e6; i++)
    {
        fact[i] = i * fact[i - 1];
        fact[i] %= mod;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    f();
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        int ans = n * (n - 1);
        ans %= mod;
        ans = ((ans % mod) * (fact[n] % mod)) % mod;
        cout << ans << endl;
    }
    return 0;
}