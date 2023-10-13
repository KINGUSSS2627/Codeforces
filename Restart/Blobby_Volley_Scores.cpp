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
    bool fa = 1;
    int sa = 0, sb = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' && fa)
        {
            sa++;
        }
        else if (s[i] == 'A' && !fa)
        {
            fa = 1;
        }
        else if (s[i] == 'B' && !fa)
        {
            sb++;
        }
        else
        {
            fa = 0;
        }
    }
    cout << sa << " " << sb << endl;
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