#include <bits/stdc++.h>
#define int long long
using namespace std;

void print(vector<int> &v)
{
    for (auto &it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }

    vector<int> x(q, 0);
    for (auto &it : x)
    {
        cin >> it;
    }

    vector<int> t;

    for (auto &it : x)
    {
        if (t.size() == 0 || it < t.back())
        {
            t.push_back(it);
        }
    }

    for (auto &it : v)
    {
        for (auto &i : t)
        {
            if (it % (int)pow(2, i))
            {
                continue;
            }
            else
            {
                it += (int)pow(2, i - 1);
            }
        }
    }

    print(v);
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}