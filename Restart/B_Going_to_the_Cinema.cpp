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
        for (auto &it : v)
        {
            in it;
        }
        int c = 0;
        sort(v.begin(), v.end());
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        if (m[0] == 0)
            c = 2;
        else
            c = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < i + 1 && v[i + 1] >= i + 2)
            {
                c++;
            }
        }
        out c << endl;
    }
    ret0
}