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
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.length(), n2 = s2.length();
        int ind = -1, flag = 0;
        char c, c1;
        if (s1[0] == s2[0])
        {
            cout << "YES" << endl;
            cout << s1[0] << "*" << endl;
        }
        else if (s1[n1 - 1] == s2[n2 - 1])
        {
            cout << "YES" << endl;
            cout << "*" << s1[n1 - 1] << endl;
        }
        else
        {
            for (int i = 0; i < n1 - 1; i++)
            {
                for (int j = 0; j < n2 - 1; j++)
                {
                    if (s1[i] == s2[j] && s1[i + 1] == s2[j + 1])
                    {
                        ind = j;
                        c = s1[i];
                        c1 = s1[i + 1];
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (ind == -1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << "*" << c << c1 << "*" << endl;
            }
        }
    }
    return 0;
}