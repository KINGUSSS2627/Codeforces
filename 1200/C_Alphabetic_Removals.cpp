#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
bool Comparator(pair<char, int> a, pair<char, int> b)
{
    if (a.second < b.second)
        return true;
    return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    in n >> k;
    string s;
    in s;
    vector<pair<char, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({s[i], i});
    }
    sort(v.begin(), v.end());
    sort(v.begin() + k, v.end(), Comparator);
    for (int i = k; i < n; i++)
    {
        out v[i].first;
    }
    out endl;
    ret0
}