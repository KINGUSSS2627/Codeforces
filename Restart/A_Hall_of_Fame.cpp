#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    tc
    {
        int n;
        in n;
        string s;
        in s;
        int r = 0;
        for (auto &i : s)
        {
            if (i == 'R')
                r++;
        }
        if (r == 0 || r == n)
        {
            out "-1" << endl;
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'L' && s[i + 1] == 'R')
            {
                out i + 1 << endl;
                break;
            }
            if (s[i] == 'R' && s[i + 1] == 'L')
            {
                out 0 << endl;
                break;
            }
        }
    }
    ret0
}