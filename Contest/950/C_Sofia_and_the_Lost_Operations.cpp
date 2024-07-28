//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    set<int> st;
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
        st.insert(it);
    }

    int m;
    cin >> m;
    vector<int> d(m);
    map<int, int> mp;
    int last = -1;
    for (auto &it : d)
    {
        cin >> it;
        mp[it]++;
        last = it;
    }

    bool ans = st.count(last);
    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i])
        {
            if (!mp[b[i]])
            {
                ans = false;
            }
            mp[b[i]]--;
        }
    }

    if (ans)
        cout << "YES" << endl;
    else
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