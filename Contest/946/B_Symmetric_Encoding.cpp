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

    map<char, char> mp;
    string s1 = "";
    map<char, int> freq;
    for (auto &it : s)
    {
        if (!freq[it])
        {
            freq[it]++;
            s1 += it;
        }
    }

    sort(s1.begin(), s1.end());

    for (int i = 0; i < (s1.size() + 1) / 2; i++)
    {
        mp[s1[i]] = s1[s1.size() - i - 1];
        mp[s1[s1.size() - i - 1]] = s1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << mp[s[i]];
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