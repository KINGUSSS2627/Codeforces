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
    string t = s;
    reverse(t.begin(), t.end());
    int minn = *min_element(t.begin(), t.end());
    int minn_idx = min_element(t.begin(), t.end()) - t.begin();
    minn_idx = n - minn_idx - 1;
    if (minn_idx && s[0] >= minn)
    {
        string s1 = "";
        s1 += minn;
        s1 += s.substr(0, minn_idx);
        s1 += s.substr(minn_idx + 1);
        cout << s1 << endl;
    }
    else
    {
        cout << s << endl;
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