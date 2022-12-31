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
    int n;
    in n;
    vector<int> v(n);
    for (auto &it : v)
    {
        in it;
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] = abs(v[i] - i - 1);
        sum += v[i];
    }
    out sum << endl;
    ret0
}