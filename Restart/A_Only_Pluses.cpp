//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    vector<int> v(3);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto &it : v)
    {
        cin >> it;
        pq.push(it);
    }

    int n = 5;
    while (n--)
    {
        int tp = pq.top();
        pq.pop();

        pq.push(tp + 1);
    }

    int ans = 1;

    while (!pq.empty())
    {
        ans *= pq.top();
        pq.pop();
    }

    cout << ans << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}