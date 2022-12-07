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
    o;
    tc
    {
        int n;
        in n;
        int A[n];
        int B[n];
        for (int i = 0; i < n; i++)
        {
            in A[i];
            B[i] = A[i] - i;
        }
        int c = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m.insert({B[i], m[B[i]]++});
        }
        for (auto &p : m)
        {
            if (p.second > 1)
            {
                c += (p.second * (p.second - 1)) / 2;
            }
        }

        cout << c << endl;
    }
    ret0
}