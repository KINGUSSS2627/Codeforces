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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                y++;
            }
            else if (s[i] == 'D')
            {
                y--;
            }
            else if (s[i] == 'L')
            {
                x--;
            }
            else
            {
                x++;
            }
            if (x == 1 && y == 1)
            {
                flag = true;
                break;
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