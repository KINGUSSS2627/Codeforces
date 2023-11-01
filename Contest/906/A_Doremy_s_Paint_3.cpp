#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> st;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        mp[it]++;
        st.insert(it);
    }
    if (st.size() == 1)
    {
        cout << "YES" << endl;
    }
    else if (st.size() == 2)
    {
        int cnt = mp[*st.begin()];
        if (cnt == n / 2 || cnt == n / 2 + 1 && n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}