#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    set<char> st;
    for (auto &it : s)
    {
        st.insert(it);
    }
    if (st.size() == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << s.size() - 1 << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}