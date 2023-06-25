#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    vector<pair<int, int>> p(n);
    set<double> st;
    for (auto &it : p)
    {
        cin >> it.first >> it.second;
        if (x0 == it.first)
            st.insert(INT_MAX);
        else
            st.insert(((double)(it.second - y0) * 1.0) / (1.0 * (it.first - x0)));
    }
    cout << st.size() << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}