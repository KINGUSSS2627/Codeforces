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
        int A[3];
        for (int i = 0; i < 3; i++)
        {
            in A[i];
        }
        sort(A, A + 3);
        if (A[0] + A[1] == A[2])
            out "YES" << endl;
        else
            out "NO" << endl;
    }
    ret0
}