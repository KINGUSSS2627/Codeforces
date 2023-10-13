#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
struct f
{
    int l, r, o, cnt;
};
int solve()
{
    int n, m;
    cin >> n >> m;
    vector<f> p;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u > v)
        {
            swap(u, v);
        }
        p.push_back({u, v, 0, v - u + 1});
    }

    int qt;
    cin >> qt;
    vector<int> q(qt);

    for (auto &i : q)
    {
        cin >> i;
    }

    int steps = 0;
    bool f = 0;
    for (auto &i : q)
    {
        if (!f)
        {
            steps++;
            for (auto &it : p)
            {
                if (i >= it.l && i <= it.r)
                {
                    it.o++;
                    it.cnt--;
                    if (it.o > it.cnt)
                    {
                        return steps;
                    }
                }
            }
        }
    }

    return -1;
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
        cout << solve() << endl;
    }
    return 0;
}