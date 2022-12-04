#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    in n;
    int A[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        in A[i];
        m = max(m, A[i]);
    }
    int H[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        H[A[i]]++;
    }
    int B[m + 1] = {0};
    B[1] = H[1];
    for (int i = 2; i <= m; i++)
    {
        B[i] = max(B[i - 1], i * H[i] + B[i - 2]);
    }
    out B[m] << endl;
    ret0
}