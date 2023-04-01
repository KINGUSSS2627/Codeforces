#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int cage_cnt = 0;
    int cnt_pigs = 0;
    int max_cage_cnt = INT_MIN;
    bool flag = false;
    for (auto &it : v)
    {
        if (it == 1)
        {
            cnt_pigs++;
            cage_cnt++;
            flag = true;
        }
        else
        {
            if (flag)
            {
                cage_cnt = (cnt_pigs >> 1) + 1;
            }
        }
        max_cage_cnt = max(max_cage_cnt, cage_cnt);
    }
    cout << max_cage_cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}