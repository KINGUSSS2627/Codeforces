//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool cmp(pair<int, char> &a, pair<int, char> &b)
{
    if (a.first < b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.second > b.second;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<int> v(m);
    for (auto &it : v)
    {
        cin >> it;
    }

    string c;
    cin >> c;

    sort(v.begin(), v.end());
    sort(c.begin(), c.end());

    map<int, char> mp;

    deque<int> v_dq;
    deque<char> c_dq;

    for (int i = 0; i < m; i++)
    {
        v_dq.push_back(v[i]);
        c_dq.push_back(c[i]);
    }

    int last = v[0];
    char ch = c[0];
    mp[v[0]] = c[0];

    v_dq.pop_front();
    c_dq.pop_front();

    while (v_dq.size())
    {
        while (c_dq.size() && v_dq.front() == last)
        {
            c_dq.pop_back();
            last = v_dq.front();
            v_dq.pop_front();
        }

        if (v_dq.size())
        {
            mp[v_dq.front()] = c_dq.front();
            last = v_dq.front();
            v_dq.pop_front();
            c_dq.pop_front();
        }
    }

    for (auto &it : mp)
    {
        s[it.first - 1] = it.second;
    }
    cout << s << endl;
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