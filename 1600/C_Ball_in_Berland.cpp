/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
==> author:     Shreshth Gupta
==> date:		2023/06/16/ 23:05:50 Friday
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    vector<pair<int, int>> p(k + 1);
    vector<int> indegreeBoy(a + 1);
    vector<int> indegreeGirl(b + 1);
    for (int i = 1; i < k + 1; i++)
    {
        cin >> p[i].first;
        indegreeBoy[p[i].first]++;
    }
    for (int i = 1; i < k + 1; i++)
    {
        cin >> p[i].second;
        indegreeGirl[p[i].second]++;
    }

    int ans = 0;
    for (int i = 1; i < k + 1; i++)
    {
        //+1 as (u,v) get sub in noth indegree
        ans += k - indegreeBoy[p[i].first] - indegreeGirl[p[i].second] + 1;
    }
    //:. (1,2) == (2,1) acc to q :. div 2
    cout << ans / 2 << endl;
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