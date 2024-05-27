//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
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

    int minn = *min_element(v.begin(), v.end());
    map<int, int> freq;

    for (auto &it : v)
    {
        freq[it]++;
    }

    if (freq[minn] == n)
    {
        cout << "NO" << endl;
        return;
    }

    if (freq[minn] == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (auto &it : v)
    {
        if (it == minn)
        {
            continue;
        }
        else if (it % minn)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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