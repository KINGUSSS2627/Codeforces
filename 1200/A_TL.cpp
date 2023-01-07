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
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (max(2 * a[0], a[n - 1]) < b[0])
    {
        out max(2 * a[0], a[n - 1]) << endl;
    }
    else
    {
        out "-1" << endl;
    }
    ret0
}