//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1;
    for (auto &it : v)
    {
        cin >> it;
        v1.push_back(it);
    }

    int cnt1{};

    for (int i{n - 2}; i >= 0; i--)
    {
        if (v1[i + 1] >= v1[i])
        {
            continue;
        }
        else
        {
            int div = ceil(v1[i] / (v1[i + 1] * 1.0));
            v1[i] = v1[i] / div;
            cnt1 += div - 1;
        }
    }
    cout << cnt1 << endl;
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