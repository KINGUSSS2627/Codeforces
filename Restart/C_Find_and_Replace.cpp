#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        bool f = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] != 0)
            {
                if ((i - mp[s[i]] + 1) % 2 != 0)
                {
                    f = 1;
                    break;
                }
            }
            mp[s[i]] = i + 1;
        }
        if (f)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}