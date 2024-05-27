//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    n--;

    vector<int> ans;
    int cnt = 1;
    int i{};
    for (i;; i++)
    {
        if (n < cnt)
        {
            break;
        }

        n -= cnt;
        cnt = cnt * 2;
        ans.push_back(i);
    }

    while (n > 0)
    {
        if (n < pow(2, i))
        {
            i--;
            continue;
        }
        ans.push_back(i);
        n -= pow(2, i);
        i--;
    }

    cout << ans.size() << endl;
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
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