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
        string x;
        in x;
        string a(n, '0'), b(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (x[i] == '1')
            {
                a[i] = '1';
                b[i] = '0';
                for (int j = i + 1; j < n; j++)
                {
                    b[j] = x[j];
                }
                break;
            }
            else
            {
                a[i] = b[i] = '0' + (x[i] - '0') / 2;
            }
        }
        out a << endl;
        out b << endl;
    }
    ret0
}