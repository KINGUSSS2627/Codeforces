#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string s1 = "abc";
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] != s1[i])
        {
            cnt++;
        }
    }

    if (cnt == 2 || cnt == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}