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
    if (is_sorted(s.begin(), s.end()))
    {
        cout << 0 << endl;
        return;
    }

    string tt = "";
    vector<int> idx;
    tt += s[0];
    idx.push_back(0);
    for (int i = 1; i < n; i++)
    {
        while (!tt.empty() && tt.back() < s[i])
        {
            tt.pop_back();
            idx.pop_back();
        }
        tt.push_back(s[i]);
        idx.push_back(i);

    }
    sort(tt.begin(), tt.end());
    for (int i = 0; i < tt.size(); i++)
    {
        s[idx[i]] = tt[i];
    }

    int ii = tt.size() - 1;
    int cnt = 0;
    while (tt[ii] == tt[tt.size() - 1])
    {
        ii--;
        cnt++;
    }
    if (is_sorted(s.begin(), s.end()))
    {

        cout << tt.size() - cnt << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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