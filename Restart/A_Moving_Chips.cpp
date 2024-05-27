//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    int start = 0, end = n - 1;
    while (v[start] == 0)
    {
        start++;
    }

    while (v[end] == 0)
    {
        end--;
    }

    int cnt = 0;

    for (int i = start; i <= end; i++)
    {
        if (!v[i])
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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