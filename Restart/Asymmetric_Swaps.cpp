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
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c;
        for (auto &i : a)
        {
            in i;
            c.push_back(i);
        }
        for (auto &i : b)
        {
            in i;
            c.push_back(i);
        }
        sort(c.begin(), c.end());
        vector<int> minn;
        int i = 0, j = n - 1;
        while (j < 2 * n)
        {
            minn.push_back(c[j] - c[i]);
            i++;
            j++;
        }
        sort(minn.begin(), minn.end());
        out minn[0] << endl;
    }
    ret0
}