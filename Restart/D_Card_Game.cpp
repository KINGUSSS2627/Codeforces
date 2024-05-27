// ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char s;
    cin >> s;

    vector<string> v(2 * n + 1, "");
    map<char, set<int>> mp;
    for (auto &it : v)
    {
        cin >> it;
        mp[it[1]].insert((int)(it[0] - '0'));
    }

    vector<string> lft, sans;
    vector<pair<string, string>> ans;

    for (auto &it : mp)
    {
        if (it.first != s)
        {
            if (it.second.size() % 2 == 0)
            {
                auto i = it.second.begin();
                while (i != it.second.end())
                {
                    auto j = next(i);
                    if (i == it.second.end() || j == it.second.end())
                        continue;

                    ans.push_back({to_string((*i)) + it.first, to_string(*j) + it.first});
                    i = next(j);
                }
            }
            else
            {
                auto k = next(it.second.begin());
                auto i = k;
                while (i != prev(it.second.end()))
                {
                    auto j = next(i);
                    if (i == it.second.end() || j == it.second.end())
                        continue;
                    if (j != it.second.end() || i != it.second.end())
                        ans.push_back({to_string((*i)) + it.first, to_string(*j) + it.first});
                    i = next(j);
                }

                string st = "";
                st += *(it.second.begin());
                st += it.first;
                lft.push_back(st);
            }
        }
        else
        {
            for (auto i = it.second.begin(); i != it.second.end(); ++i)
            {
                string sp = "";
                sp += to_string(*i);
                sp += s;
                sans.push_back(sp);
            }
        }
    }

    if (lft.size() <= sans.size())
    {
        if ((sans.size() - lft.size()) % 2 == 0)
        {
            for (int i = 0; i < lft.size(); i++)
            {
                ans.push_back({lft[i], sans[i]});
            }

            for (int i = lft.size(); i < sans.size(); i += 2)
            {
                ans.push_back({sans[i], sans[i + 1]});
            }
        }
    }

    for (auto &it : ans)
    {
        cout << it.first << " " << it.second << endl;
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
