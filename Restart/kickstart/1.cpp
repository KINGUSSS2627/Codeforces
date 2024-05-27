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
        int n = 26;
        vector<int> v(n);
        set<string> st;
        for (auto &it : v)
        {
            cin >> it;
        }
        int m;
        cin >> m;
        vector<string> s(m);
        for (auto &it : s)
        {
            cin >> it;
            string p = "";
            for (auto &it1 : it)
            {
                p += v[it1 - 'A'];
            }
            st.insert(p);
        }
        if (m == st.size())
        {
            cout << "Case #" << k << ": "
                 << "NO" << endl;
        }
        else
        {
            cout << "Case #" << k << ": "
                 << "YES" << endl;
        }
        k++;
    }
    return 0;
}