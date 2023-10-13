#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            ans++;
            i -= k - 1;
        }
    }
    cout << ans << endl;
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