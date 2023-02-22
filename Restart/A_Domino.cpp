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
    int flag = 0;
    vector<pair<int, int>> v(n);
    int stop = 0, sbottom = 0;
    for (auto &it : v)
    {
        in it.first >> it.second;
        stop += it.first;
        sbottom += it.second;
        if (it.first % 2 + it.second % 2 == 1)
        {
            flag = 1;
        }
    }
    if ((stop % 2 + sbottom % 2 == 1) || (n == 1 && (stop % 2 != 0 || sbottom % 2 != 0)))
    {
        out - 1 << endl;
    }
    else
    {
        if (stop % 2 == 0 && sbottom % 2 == 0)
            out 0 << endl;
        else if (stop % 2 + sbottom % 2 >= 1 && flag == 1)
            out 1 << endl;
        else
            out - 1 << endl;
    }
    ret0
}