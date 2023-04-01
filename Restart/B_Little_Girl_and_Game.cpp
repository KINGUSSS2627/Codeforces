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
    int n = s.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i] - 'a']++;
    }
    int odd = 0, addodd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mp[i] & 1)
        {
            odd++;
            addodd += mp[i];
        }
    }
    if (odd <= 1)
    {
        cout << "First" << endl;
    }
    else
    {
        if (addodd & 1)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}