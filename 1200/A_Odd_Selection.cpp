#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
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
        int n, m;
        in n >> m;
        int A[n];
        int c_e = 0, c_o = 0;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            if (A[i] % 2 == 0)
                c_e++;
            else
                c_o++;
        }
        int temp = min(c_e, m - 1);
        int temp1 = m - temp;
        if (temp1 % 2 == 0)
            temp1++;
        if (c_o >= temp1 && temp1 <= m)
            cy;
        else
            cn;
    }
    ret0
}