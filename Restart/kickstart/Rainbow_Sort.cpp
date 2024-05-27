#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int k = 1;
    tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        set<int> s;
        queue<int> q;
        s.insert(v[0]);
        q.push(v[0]);
        bool flag = 0;
        for (int i = 1; i < n; i++)
        {
            int prev = s.size();
            s.insert(v[i]);
            if (s.size() == prev && v[i] != v[i - 1])
            {
                flag = 1;
                break;
            }
            else if (prev != s.size())
            {
                q.push(v[i]);
            }
        }
        if (flag)
        {
            cout << "Case #" << k << ":"
                 << " IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "Case #" << k << ": ";
            while (!q.empty())
            {
                cout << q.front() << " ";
                q.pop();
            }
            cout << endl;
        }
        k++;
    }
    return 0;
}