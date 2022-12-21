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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            if (i > 0)
                v.push_back(A[i]);
        }
        int i = 0;
        sort(v.begin(), v.end());
        do
        {
            if (v[i] > A[0])
            {
                v[i] = ((v[i] - A[0]) % 2 == 0) ? v[i] : (v[i] + 1);
                v[i] -= A[0];
                A[0] = A[0] + (v[i]) / 2;
            }
            i++;
        } while ((v[i] > A[0] && i < n - 1) || i < n - 1);
        out A[0] << endl;
    }
    ret0
}