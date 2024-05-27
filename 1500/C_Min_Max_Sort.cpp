//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }

    int ans = n / 2;
    // Max ans

    int i = n / 2 - 1;
    int j = (n & 1) ? (n / 2 + 1) : (n / 2);

    // Index based 1
    i++, j++;
    while (i >= 1 && j <= n)
    {
        if (mp[i] < mp[i + 1] && mp[j - 1] < mp[j])
        {
            ans--;
        }
        else
        {
            break;
        }
        i--, j++;
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