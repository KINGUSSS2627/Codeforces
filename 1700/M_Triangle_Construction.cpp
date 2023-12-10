//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0, maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        maxx = max(maxx, v[i]);
    }

    int lft = sum - maxx;
    if (maxx > 2 * lft)
    {
        cout << lft << endl;
    }
    else
    {
        cout << sum / 3 << endl;
    }
}
int32_t main()
{
    solve();
    return 0;
}