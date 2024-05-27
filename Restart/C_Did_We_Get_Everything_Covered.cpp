//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> k >> m;
    // n -> length req
    // k -> First k char
    // m -> string length

    string s;
    cin >> s;

    vector<char> last;
    set<char> c;

    for (char a = 'a'; a < 'a' + k; a++)
    {
        c.insert(a);
    }

    set<char> ch;
    for (int i = 0; i < m;)
    {
        ch = c;
        char rem;
        while (ch.size() != 0 && i < m)
        {
            if (ch.find(s[i]) != ch.end())
            {
                rem = s[i];
                ch.erase(rem);
            }
            i++;
            // if (i == m && ch.size() != 0)
            // {
            //     last.push_back(*ch.begin());
            // }
        }
        if (!ch.size())
        {
            last.push_back(rem);
        }
    }

    if (last.size() >= n)
    {
        cout << "YES" << endl;
        return;
    }

    if (ch.size() != 0)
    {
        last.push_back(*ch.begin());
    }

    cout << "NO" << endl;
    while (last.size() < n)
    {
        last.push_back('a');
    }

    for (int i = 0; i < n; i++)
    {
        cout << last[i];
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