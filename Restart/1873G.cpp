#include <bits/stdc++.h>
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
        cout << 0 << endl;
        return;
    }

}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}