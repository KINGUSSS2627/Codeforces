#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> ans;
        for (int i = 0; i <= 50; i++)
        {
            int temp = n / 2;
            int k = temp >> i;
            if (k == 0)
                break;
            if (k & 1)
                ans.push_back(2);
            else
                ans.push_back(1);
        }
        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
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