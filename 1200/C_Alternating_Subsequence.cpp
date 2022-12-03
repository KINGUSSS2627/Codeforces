#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t
#define pb push_back
#define pp pop
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    o;
    tc
    {
        int n;
        in n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            in A[i];
        }
        int i = 0, j = 0;
        vector<int> v;
        int max = A[0];
        while (i < n && j < n)
        {
            while (A[i] > 0 && i < n)
            {
                if (A[i] > max)
                    max = A[i];
                i++;
            }
            if (max > 0)
                v.pb(max);
            if (i == n)
                break;
            j = i;
            max = A[i];
            while (A[j] < 0 && j < n)
            {
                if (A[j] > max)
                    max = A[j];
                j++;
            }
            if (max < 0)
                v.pb(max);
            if (j == n)
                break;
            i = j;
        }
        int sum = 0;
        for (auto val : v)
        {
            sum += val;
        }
        out sum << endl;
    }
    ret0
}