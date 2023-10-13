#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    char prev = s[0], next;
    int j = 0;
    while (s[j] == '?')
    {
        s[j] = '0';
        j++;
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != '?')
        {
            prev = s[i];
        }
        else
        {
            s[i] = prev;
        }
    }
    cout << s << endl;
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
        solve();
    }
    return 0;
}