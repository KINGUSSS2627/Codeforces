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
    int A[4];
    for (int i = 0; i < 4; i++)
    {
        in A[i];
    }
    sort(A, A + 4);
    for (int i = 0; i < 3; i++)
    {
        out A[3] - A[i] << " ";
    }
    out endl;
    ret0
}