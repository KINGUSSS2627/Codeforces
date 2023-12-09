#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    sort(v.begin(), v.end());
    vector<int> diff;
    for (int i = 0; i < n - 1; i++)
    {
        diff.push_back(v[n - 1] - v[i]);
    }
    if (diff.size() == 0)
    {
        cout << 1 << endl;
        return;
    }
    int gc = diff[0];
    for (int i = 1; i < diff.size(); i++)
    {
        gc = __gcd(gc, diff[i]);
    }
    int ans = 0;
    for (int i = 0; i < diff.size(); i++)
    {
        ans += diff[i] / gc;
    }
    int maxi = v[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (s.find(maxi - gc) == s.end())
        {
            ans += i + 1;
            break;
        }
        else
        {
            maxi -= gc;
        }
    }

    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}