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
    int k = 1;
    tc
    {
        string s;
        cin >> s;
        string s1 = "";
        int c1 = 0, c2 = 0;
        int m = 0, n = s.size() - 1;
        while (s[m] == s[0])
        {
            c1++;
            m++;
        }
        while (s[n] == s[s.size() - 1])
        {
            c2++;
            n--;
        }
        if (s[0] == s[s.size() - 1])
        {
            if (c1 % 2 == 0)
            {
                s1 += s[s.size() - 1];
                s1 += s;
            }
            else if (c2 % 2 == 0)
            {
                s1 += s;
                s1 += s[0];
            }
            else
            {
                if (c1 >= c2)
                {
                    s1 += s[s.size() - 1];
                    s1 += s;
                }
                else
                {
                    s1 += s;
                    s1 += s[0];
                }
            }
        }
        else
        {
            s1 = s;
        }
        // s1 += s[0];
        // cout << s1 << endl;
        int cnt = 0;
        for (int i = 1; i < s1.size() - 1; i++)
        {
            if (s1[i - 1] == s1[i] && s1[i] == s1[i + 1])
            {
                cnt++;
                if (s1[i] == 'P')
                {
                    s1[i] = 'R';
                }
                else
                {
                    s1[i] = 'P';
                }
            }
        }
        for (int i = 1; i < s1.size(); i++)
        {
            if (s1[i] == s1[i - 1])
                cnt++;
        }
        cout << "Case #" << k << ": ";
        cout << cnt << endl;
        k++;
    }
    return 0;
}