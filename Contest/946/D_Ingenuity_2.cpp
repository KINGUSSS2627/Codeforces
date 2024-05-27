//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int no = -1, so = -1, w = -1, e = -1;

    for (int i = 0; i < n; i++)
    {
        if (no == -1 && s[i] == 'N')
        {
            no = i;
        }
        else if (so == -1 && s[i] == 'S')
        {
            so = i;
        }
        else if (w == -1 && s[i] == 'W')
        {
            w = i;
        }
        else if (e == -1 && s[i] == 'E')
        {
            e = i;
        }
    }

    map<char, int> a, b;

    string ans = "";
    for (auto &it : s)
    {
        if (it == 'S')
        {
            if (a['N'] > b['N'])
            {
                a['N']--;
                ans += 'H';
            }
            else
            {
                b['N']--;
                ans += 'R';
            }
        }
        else if (it == 'W')
        {
            if (a['E'] > b['E'])
            {
                a['E']--;
                ans += 'H';
            }
            else
            {
                b['E']--;
                ans += 'R';
            }
        }
        else
        {
            if (a[it] > b[it])
            {
                ans += 'R';
                b[it]++;
            }
            else
            {
                ans += 'H';
                a[it]++;
            }
        }
    }

    bool f = 1;

    if (a['N'] != b['N'] || a['E'] != b['E'])
    {
        f = 0;
    }

    bool f1 = 0;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] != ans[i + 1])
        {
            f1 = 1;
            break;
        }
    }

    if (!f1)
    {

        if (no != -1 && so != -1)
        {
            ans[no] = (ans[no] == 'R') ? 'H' : 'R';
            ans[so] = (ans[so] == 'R') ? 'H' : 'R';
            f1 = 1;
        }
        else if (e != -1 && w != -1)
        {
            ans[e] = (ans[e] == 'R') ? 'H' : 'R';
            ans[w] = (ans[w] == 'R') ? 'H' : 'R';
            f1 = 1;
        }
    }

    bool f2 = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != ans[0])
        {
            f2 = 1;
            break;
        }
    }

    if (f && f1 && f2)
    {
        cout << ans << endl;
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