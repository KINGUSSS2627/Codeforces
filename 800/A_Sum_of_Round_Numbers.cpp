#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int power = 1;
    while (n > 0)
    {
        if (n % 10 > 0)
        {
            ans.push_back((n % 10) * power);
        }
        n /= 10;
        power *= 10;
    }
    cout << ans.size() << endl;
    for (auto number : ans)
        cout << number << " ";
    cout << endl;
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