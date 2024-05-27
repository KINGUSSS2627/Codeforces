//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0), d(n, 0);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : d)
    {
        cin >> it;
    }

    set<int> alive, die;
    for (int i{}; i < n; i++)
    {
        alive.insert(i);
    }

    for (int i{}; i < n; i++)
    {
        int dmg{};
        if (i)
        {
            dmg += a[i - 1];
        }
        if (i < n - 1)
        {
            dmg += a[i + 1];
        }

        if (dmg > d[i])
        {
            die.insert(i);
        }
    }

    for (int i{}; i < n; i++)
    {
        cout << die.size() << " ";
        for (auto &it : die)
        {
            alive.erase(it);
        }

        set<int> die_nxt;
        for (auto &j : die)
        {
            auto it = alive.lower_bound(j);
            if (it == alive.end())
            {
                break;
            }
            int dmg{};
            if (it != alive.begin())
            {
                dmg += a[*prev(it)];
            }
            if (next(it) != alive.end())
            {
                dmg += a[*next(it)];
            }

            if (dmg > d[*it])
            {
                die_nxt.insert(*it);
            }

            if (it != alive.begin())
            {
                auto pre = prev(it);
                int dmg{};
                if (pre != alive.begin())
                {
                    dmg += a[*prev(pre)];
                }
                if (next(pre) != alive.end())
                {
                    dmg += a[*next(pre)];
                }

                if (dmg > d[*pre])
                {
                    die_nxt.insert(*pre);
                }
            }
        }

        die = die_nxt;
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