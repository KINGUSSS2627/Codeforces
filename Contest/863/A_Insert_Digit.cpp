#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a, b;
    string s1;
    cin >> a >> b;
    cin >> s1;
    if (b == 0)
    {
        cout << s1 << b << endl;
    }
    else
    {
        int ind = -1;
        int n = s1.size();
        for (int i = 0; i < n; i++)
        {
            if (s1[i] - '0' < b)
            {
                ind = i;
                break;
            }
        }
        if (ind != -1)
            cout << s1.substr(0, ind) << b << s1.substr(ind) << endl;
        else
            cout << s1 << b << endl;
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