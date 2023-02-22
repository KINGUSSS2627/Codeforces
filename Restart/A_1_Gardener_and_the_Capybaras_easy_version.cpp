#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
#define p = 1000000007
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
        int l = s.length();

        int i = 0, j = l - 1;
        while (i < j)
        {
            string a, b, c;
            for (int k = 0; k <= i; k++)
            {
                a += s[k];
            }
            for (int k = i + 1; k < j; k++)
            {
                b += s[k];
            }
            for (int k = j; k < l; k++)
            {
                c += s[k];
            }
            if ((a <= b && c <= b) || (b <= a && b <= c))
            {
                out a << " " << b << " " << c << endl;
                break;
            }
            if (a < b && b < c)
            {
                i++;
            }
            else
                j--;
        }
    }
    ret0
}