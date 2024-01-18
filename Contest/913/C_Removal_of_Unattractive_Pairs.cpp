//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    priority_queue<int> pq;
    for (auto &it : mp)
    {
        pq.push(it.second);
    }

    while (pq.size() > 1)
    {
        int m1 = pq.top();
        pq.pop();
        int m2 = pq.top();
        pq.pop();

        m1--;
        m2--;
        if (m1)
        {
            pq.push(m1);
        }
        if (m2)
        {
            pq.push(m2);
        }
    }
    if (!pq.empty())
        cout << pq.top() << endl;
    else
        cout << 0 << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
