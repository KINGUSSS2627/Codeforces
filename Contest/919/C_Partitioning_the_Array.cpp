//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    vector<int> fact;
    for (int i{1}; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);
            if (i != n / i)
            {
                fact.push_back(n / i);
            }
        }
    }

    sort(fact.begin(), fact.end());

    int ans{1};
    for (int i{}; i < fact.size() - 1; i++)
    {
        int temp = abs(v[fact[i]] - v[0]);
        for (int j{}; j < n - fact[i]; j++)
        {
            int diff = abs(v[j + fact[i]] - v[j]);
            temp = __gcd(temp, diff);
        }
        if (temp != 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
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
