
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
        string s1 = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
            {
                while (s[i] == 'm' || s[i] == 'M')
                {
                    i++;
                }
                s1 += 'm';
                i--;
            }
            else if (s[i] == 'e' || s[i] == 'E')
            {
                while (s[i] == 'e' || s[i] == 'E')
                {
                    i++;
                }
                s1 += 'e';
                i--;
            }
            else if (s[i] == 'o' || s[i] == 'O')
            {
                while (s[i] == 'o' || s[i] == 'O')
                {
                    i++;
                }
                s1 += 'o';
                i--;
            }
            else if (s[i] == 'w' || s[i] == 'W')
            {
                while (s[i] == 'w' || s[i] == 'W')
                {
                    i++;
                }
                s1 += 'w';
                i--;
            }
            else
            {
                s1 += '%';
            }
        }
        string s2 = "meow";
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}