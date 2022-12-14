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
        int t1, t2, flag = 1;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            in t1 >> t2;
            v.push_back({t1, t2});
        }
        sort(v.begin(), v.end());
        // for (auto &val : v)
        // {
        //     out val.first << " " << val.second << endl;
        // }
        for (int i = n - 1; i >= 1; i--)
        {
            v[i].first = v[i].first - v[i - 1].first;
            v[i].second = v[i].second - v[i - 1].second;
            if (v[i].first < 0 || v[i].second < 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            out "NO" << endl;
        }
        else
        {
            out "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                while (v[i].first--)
                {
                    out "R";
                }
                while (v[i].second--)
                {
                    out "U";
                }
            }
            out endl;
        }
    }
    ret0
}