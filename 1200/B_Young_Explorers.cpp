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
        int A[n];
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            if (A[i] > max)
            {
                max = A[i];
            }
        }
        int B[max + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            B[A[i]]++;
        }
        int c = 0;
        for (int i = 1; i < max + 1; i++)
        {
            c += B[i] / i;
            if (i < max)
                B[i + 1] += (B[i] % i);
        }
        out c << endl;
    }
    ret0
}