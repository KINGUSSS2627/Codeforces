//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    set<int> A, B, C;

    for (auto &it : a)
    {
        cin >> it;
        if (it <= k)
        {
            A.insert(it);
            C.insert(it);
        }
    }
    for (auto &it : b)
    {
        cin >> it;
        if (it <= k)
        {
            B.insert(it);
            C.insert(it);
        }
    }

    bool ans = 0;
    if (B.size() >= k / 2 && A.size() >= k / 2 && C.size() >= k)
    {
        ans = 1;
    }

    ans ? cout << "YES" << endl : cout << "NO" << endl;
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