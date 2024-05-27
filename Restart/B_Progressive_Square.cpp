//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, c, d;
    cin >> n >> c >> d;

    vector<int> v(n * n, 0);
    multiset<int> st;

    int minn = 1e9;
    for (auto &it : v)
    {
        cin >> it;

        minn = min(minn, it);
        st.insert(it);
    }

    multiset<int> ans;
    queue<int> q;

    q.push(minn);
    ans.insert(minn);

    while (ans.size() != n)
    {
        int t = *prev(ans.end());
        t += c;

        q.push(t);
        ans.insert(t);
    }

    while (!q.empty())
    {
        int t = q.front();
        q.pop();

        for (int i = 0; i < n - 1; i++)
        {
            t += d;
            ans.insert(t);
        }
    }

    // for (auto &it : ans)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    // for (auto &it : st)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    if (ans == st)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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