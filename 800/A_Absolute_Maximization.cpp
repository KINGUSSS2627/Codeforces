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
        vector<int> A;
        vector<int> B;
        int temp;
        for (int i = 0; i < n; i++)
        {
            in temp;
            A.push_back(temp);
            B.push_back(temp);
        }
        for (int i = 0; i < n - 1; i++)
        {
            A[i + 1] = A[i] | A[i + 1];
            B[i + 1] = B[i] & B[i + 1];
        }
        out A[n - 1] - B[n - 1] << endl;
    }
    ret0
}