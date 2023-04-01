#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'B')
            v.push_back(1);
    }
    map<string, int> mp;
    int i = 0, n = s.length();
    while (i < n - 1)
    {
        string t = "";
        t += s[i];
        t += s[i + 1];
        if (t == "AB" && mp["AB"] == 0)
            i += 2;
        else if (t == "BA" && mp["BA"] == 0)
            i += 2;
        else
            i++;
        mp[t]++;
    }
    if (mp["AB"] > 1 && mp["BA"] == 0 && v.size() > 4)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                mp["BA"]++;
                break;
            }
        }
    }
    else if (mp["BA"] > 1 && mp["AB"] == 0 && v.size() > 4)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                mp["AB"]++;
                break;
            }
        }
    }
    if (mp["AB"] && mp["BA"])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}