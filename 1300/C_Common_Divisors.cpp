#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
// vector<int>seive()
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int hcf;
    if (n > 1)
    {
        hcf = __gcd(v[0], v[1]);
        for (int i = 2; i < n; i++)
        {
            hcf = __gcd(v[i], hcf);
        }
    }
    else
    {
        hcf = v[0];
    }
    int cnt = 0;
    for (int i = 1; i * i <= hcf; i++)
    {
        if (hcf % i == 0)
        {
            cnt++;
            if (hcf / i != i)
                cnt++;
        }
    }

    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}