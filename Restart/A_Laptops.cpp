#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    in n;
    vector<int> price(n);
    vector<int> quality(n);
    for (auto &i : price)
    {
        in i;
    }
    for (auto &i : quality)
    {
        in i;
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({price[i], quality[i]});
    }
    sort(v.begin(), v.end(), cmp);

    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].first < v[i + 1].first && v[i].second > v[i + 1].second)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        out "Happy Alex" << endl;
    }
    else
    {
        out "Poor Alex" << endl;
    }
    ret0
}