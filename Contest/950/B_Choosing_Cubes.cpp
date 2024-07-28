//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    int fav = v[f - 1];
    sort(v.begin(), v.end(), greater<int>());
    set<int> rem, nrem;
    for (int i = 0; i < k; i++)
    {
        rem.insert(v[i]);
    }

    for (int i = k; i < n; i++)
    {
        nrem.insert(v[i]);
    }

    if (rem.find(fav) == rem.end())
    {
        cout << "NO" << endl;
    }
    else if (rem.find(fav) != rem.end() && nrem.find(fav) != nrem.end())
    {
        cout << "MAYBE" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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