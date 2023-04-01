#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> s;
    map<char, int> st;
    for (auto &it : s)
    {
        st[it]++;
    }
    if (st.size() == 1)
    {
        cout << -1 << endl;
    }
    else if (st.size() == 4)
    {
        cout << 4 << endl;
    }
    else if (st.size() == 2)
    {
        if (st[s[0]] == 2)
            cout << 4 << endl;
        else
            cout << 6 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
}