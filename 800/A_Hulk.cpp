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
    int t1 = t;
    string s = "I hate ", s1 = "I love ", s2 = "that ";
    while (t)
    {
        if (t != t1 && t > 0)
        {
            out s2;
        }
        out s;
        t--;
        if (t > 0)
        {
            out s2 << s1;
            t--;
        }
    }
    out "it" << endl;
    ret0
}