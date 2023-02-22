#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e9 + 7;

ll bpow(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll modinv(ll n, ll p)
{
    return bpow(n, p - 2, p);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<ll> a(m + 2, 0);
        vector<ll> b(m + 1, 0);

        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a[temp]++;
        }
        for (int i = 1; i <= m; i++)
            cin >> b[i];
        for (int i = 1; i <= m; i++)
        {
            a[i] += a[i - 1];
        }
        ll ans = 0;
        for (ll i = 1; i <= m; i++)
        {
            ll curr = 0;
            ll j = i;
            for (; j <= m; j += i)
            {
                curr += (a[j] - a[j - 1]) * (j / i);

                if (j != i)
                {
                    curr += (a[j - 1] - a[j - i]) * ((j - i) / i);
                }
                if (j + i > m)
                    break;
            }
            curr += (a[m] - a[j]) * ((j / i));
            // curr/=i;
            ans = max(ans, curr * b[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}