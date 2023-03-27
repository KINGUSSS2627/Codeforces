#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> indx(n + 1, 0);
    int i = 0;
    for (auto &it : v)
    {
        cin >> it;
        indx[it] = i;
        i++;
    }
    vector<int> v1(n);
    map<int, int> mp;
    int j = 0;
    for (auto &it : v1)
    {
        cin >> it;
        mp[(j - indx[it] + n) % n]++;
        j++;
    }
    int max_cnt = 0;
    for (auto &it : mp)
    {
        max_cnt = max(max_cnt, it.second);
    }
    cout << max_cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}