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
    int n, k, x;
    in n >> k >> x;
    vector<int> v(n);
    for (auto &it : v)
    {
        in it;
    }
    vector<int> v1;
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > x)
            v1.push_back(v[i + 1] - v[i]);
    }
    sort(v1.begin(), v1.end());
    int i = 0;
    while (i < v1.size())
    {
        if ((v1[i] - 1) / x <= k)
        {
            k -= (v1[i] - 1) / x;
            i++;
        }
        else
        {
            break;
        }
    }
    out v1.size() - i + 1 << endl;
    ret0
}