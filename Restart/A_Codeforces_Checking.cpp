#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
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
        char c;
        cin >> c;
        string s = "codeforces";
        bool flag = false;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (c == s[i])
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    ret0
}