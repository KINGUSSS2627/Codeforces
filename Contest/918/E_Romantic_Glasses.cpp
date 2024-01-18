//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }
    set<int> st;
    int ans = 0;
    st.insert(0);
    for (int i{}; i < n; i++)
    {
        if (i & 1)
            ans -= v[i];
        else
            ans += v[i];

        if (st.find(ans) != st.end())
        {
            cout << "YES" << endl;
            return;
        }
        st.insert(ans);
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