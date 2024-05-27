#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    vector<string> s = {"code", "doce", "ecod", "framer", "frame"};
    vector<string> s1 = {"code", "doce", "ecod", "framer", "frame"};
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        sort(s1[i].begin(), s1[i].end());
    }
    set<string> st;
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        int prev = st.size();
        st.insert(s1[i]);
        if (st.size() > prev)
        {
            ans.push_back(s[i]);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto &it : ans)
    {
        cout << it << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}