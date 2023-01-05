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
    int n, m;
    in n >> m;
    char A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            in A[i][j];

            if (A[i][j] == '.')
            {
                if ((i + j) & 1)
                {
                    A[i][j] = 'W';
                }
                else
                {
                    A[i][j] = 'B';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            out A[i][j];
        }
        out endl;
    }
    ret0
}