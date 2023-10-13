#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool f = 0;
    int sz = s.size();
    string t1 = s.substr(0, s.size() / 2);
    for (int i = 0; i < t1.size() - 1; i++)
    {
        if (t1[i] != t1[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f)
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