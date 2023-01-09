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
    int sum = 0;
    vector<int> v(t);
    for (auto &i : v)
    {
        in i;
        sum += i;
    }
    out fixed << (double)sum / (float)t << endl;
    ret0
}