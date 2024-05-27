//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> missing(n + 1, 1);

    for (auto &it : v)
    {
        cin >> it;
        missing[it] = 0;
    }

    int miss = 0;
    for (int i = 0; i <= n; i++)
    {
        if (missing[i] == 1)
        {
            miss = i;
            break;
        }
    }

    int i1 = 0, j1 = 0, i2 = 0, j2 = 0;
    set<int> st;

    while (j1 < n && st.size() != miss)
    {
        if (v[j1] < miss)
        {
            st.insert(v[j1]);
        }
        j1++;
    }

    // cout << "$ " << i1 << " " << j1 << endl;

    if (st.size() != miss || j1 == n)
    {
        cout << -1 << endl;
        return;
    }

    // cout << 1 << endl;

    st.clear();

    i2 = j1;
    j2 = i2;

    while (j2 < n && st.size() != miss)
    {
        if (v[j2] < miss)
        {
            st.insert(v[j2]);
        }
        j2++;
    }

    // cout << "$ " << i2 << " " << j2 << endl;

    if (st.size() != miss)
    {
        cout << -1 << endl;
        return;
    }

    cout << 2 << endl;
    if (miss == 0)
    {
        cout << i1 + 1 << " " << j1 + 1 << endl;
        cout << i2 + 2 << " " << n << endl;
        return;
    }
    cout << i1 + 1 << " " << j1 << endl;
    cout << i2 + 1 << " " << n << endl;
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