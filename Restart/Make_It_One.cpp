//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int l, r;
    cin >> l >> r;

    vector<int> v, ans;

    for (int i = l; i <= r; i++)
    {
        v.push_back(i);
    }

    for (int i = l + 1; i <= r; i++)
    {
        ans.push_back(i);
    }

    ans.push_back(l);

    if (__gcd(l, r) == 1)
    {
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else
    {
        bool f = 0;
        for (int i = 1; i < ans.size() - 1; i++)
        {
            if (__gcd(l, v[i]) == 1 && __gcd(v[i + 1], r) == 1)
            {
                swap(ans[ans.size() - 1], ans[i]);
                f = 1;
                break;
            }
        }
        if (!f)
        {
            cout << -1 << endl;
            return;
        }
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
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