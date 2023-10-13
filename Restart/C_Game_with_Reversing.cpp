#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int same = 0, samer = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            same++;
        }
    }
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            samer++;
        }
    }
    reverse(s2.begin(), s2.end());

    if (!same)
    {
        cout << 0 << endl;
    }
    else if (!samer)
    {
        cout << 2 << endl;
    }
    else
    {
        int t1 = 2 * samer;
        if (samer % 2 == 0)
            t1--;
        int t2 = 2 * same;
        if (same % 2)
            t2--;
        cout << min(t1, t2) << endl;
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