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
        int n, m;
        in n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (auto &it : a)
        {
            in it;
        }
        for (auto &it : b)
        {
            in it;
        }
        int k = m;
        for (int i = 0; i < k; i++)
        {
            sort(a.begin(), a.end());
            swap(a[0], b[i]);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        out sum << endl;
    }
    ret0
}
