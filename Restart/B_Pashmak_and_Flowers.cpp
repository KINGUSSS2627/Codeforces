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
    int clow = 0, chigh = 0;
    for (auto &it : v)
    {
        if (it == v[0])
            clow++;
        else if (it == v[n - 1])
            chigh++;
    }
    if (v[0] == v[n - 1])
    {
        out v[n - 1] - v[0] << " " << n * (n - 1) / 2 << endl;
    }
    else
    {
        out v[n - 1] - v[0] << " " << clow * chigh << endl;
    }
    ret0
}