#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flagl = 0, flagr = 0;
    set<char> st;
    for (auto &it : s)
    {
        st.insert(it);
        if (it == '<')
        {
            flagl = 1;
        }
        else if (it == '>')
        {
            flagr = 1;
        }
    }
    if (((!flagr) || (!flagl)) || st.size() == 1)
    {
        cout << n << endl;
    }
    else
    {
        vector<int> len;
        int l = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i % n] == '-')
            {
                l++;
            }
            else
            {
                len.push_back(l);
                l = 0;
            }
        }
        int maxx = *max_element(len.begin(), len.end());
        if (!maxx)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << maxx + 1 << endl;
        }
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