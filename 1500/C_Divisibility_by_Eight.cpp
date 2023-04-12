#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size(), t = 0;
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                t = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (t % 8 == 0)
                {
                    f = 1;
                    cout << "YES" << endl;
                    cout << t << endl;
                    return;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            t = (s[i] - '0') * 10 + (s[j] - '0');
            if (t % 8 == 0)
            {
                f = 1;
                cout << "YES" << endl;
                cout << t << endl;
                return;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') % 8 == 0)
        {
            t = s[i] - '0';
            cout << "YES" << endl;
            cout << t << endl;
            return;
        }
    }
    if (!f)
    {
        cout << "NO" << endl;
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