#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size() - 1, idx = n;
    for (int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0)
        {
            idx = i;
            if (s[n] > s[i])
                break;
        }
    if (n == idx)
        cout << -1 << endl;
    else
    {
        swap(s[idx], s[n]);
        cout << s << endl;
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