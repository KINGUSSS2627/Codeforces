//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isOk(vector<int> &v)
{
    int g = __gcd(v[0], v[1]);
    for (int i = 1; i < v.size() - 1; i++)
    {
        int cur_gcd = __gcd(v[i], v[i + 1]);
        if (g > cur_gcd)
            return false;
        g = cur_gcd;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    int g = -1, del = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int curr = __gcd(v[i], v[i + 1]);
        if (curr < g)
        {
            del = i;
            break;
        }
        g = curr;
    }

    vector<int> a = v, b = v, c = v;
    a.erase(a.begin() + del);
    if (del < n - 1)
        b.erase(b.begin() + del + 1);
    if (del > 0)
        c.erase(c.begin() + del - 1);

    if (del == -1)
    {
        cout << "YES" << endl;
    }
    else if (isOk(a) || isOk(b) || isOk(c))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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