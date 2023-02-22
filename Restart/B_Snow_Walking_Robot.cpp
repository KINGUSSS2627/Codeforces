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
        string s;
        in s;
        int l = 0, r = 0, u = 0, d = 0;
        for (auto &it : s)
        {
            if (it == 'L')
                l++;
            else if (it == 'R')
                r++;
            else if (it == 'U')
                u++;
            else
                d++;
        }
        int t1 = min(l, r), t2 = min(u, d);
        if (t1 == 0 && t2 == 0)
        {
            out 0 << endl;
        }
        else if (t1 == 0)
        {
            out 2 << endl;
            out "UD" << endl;
        }
        else if (t2 == 0)
        {
            out 2 << endl;
            out "LR" << endl;
        }
        else
        {
            out 2 * (t1 + t2) << endl;
            for (int i = 0; i < t1; i++)
            {
                out "L";
            }
            for (int i = 0; i < t2; i++)
            {
                out "U";
            }
            for (int i = 0; i < t1; i++)
            {
                out "R";
            }
            for (int i = 0; i < t2; i++)
            {
                out "D";
            }
            cout << endl;
        }
    }
    ret0
}