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
        vector<pair<int, int>> v(n);
        for (auto &it : v)
        {
            in it.first >> it.second;
        }
        int flag1 = 1, flag2 = 1, flag3 = 1, flag4 = 1;
        ;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1].first < v[i].first)
            {
                flag1 = 0;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i].first < v[i].second)
            {
                flag4 = 0;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1].second < v[i].second)
            {
                flag2 = 0;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1].first == v[i].first && v[i + 1].second != v[i].second)
            {
                flag3 = 0;
                break;
            }
            if (v[i + 1].first - v[i].first < v[i + 1].second - v[i].second)
            {
                flag3 = 0;
                break;
            }
        }
        if (flag1 == 0 || flag2 == 0 || flag3 == 0 || flag4 == 0)
        {
            out "NO" << endl;
        }
        else
        {
            out "YES" << endl;
        }
    }
    ret0
}