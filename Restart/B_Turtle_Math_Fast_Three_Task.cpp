//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int sum = 0;
    bool f = 0;
    for (auto &it : v)
    {
        cin >> it;
        sum += it;

        if ((it - 1) % 3 == 0)
        {
            f = 1;
        }
    }

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if (sum % 3 == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        if (f)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
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