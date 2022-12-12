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
    int n, k;
    in n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        in A[i];
    }
    sort(A, A + n);
    // exactly k element less then or equal to
    if (k == 0 && A[0] > 1)
        out 1 << endl;
    else if (k == 0 && A[0] == 1)
        out - 1 << endl;
    else if (k <= n - 1)
    {
        if (A[k - 1] != A[k])
            out A[k - 1] << endl;
        else
            out - 1 << endl;
    }
    else if (k == n)
        out A[k - 1] << endl;
    ret0
}