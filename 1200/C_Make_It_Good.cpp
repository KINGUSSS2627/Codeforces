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
        vector<int> v(n);
        for (auto &i : v)
        {
            in i;
        }
        int j = n - 1;
        while (j > 0 && v[j - 1] >= v[j])
            j--;
        while (j > 0 && v[j] >= v[j - 1])
            j--;
        out j << endl;
    }
    ret0
}