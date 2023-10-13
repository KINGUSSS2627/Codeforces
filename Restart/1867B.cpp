#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int same = 0, diff = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            diff++;
        }
        i++;
        j--;
    }
    same = n / 2 - diff;
    string ans = "";
    for (int i = 0; i <= n; i++)
    {
        ans += '0';
    }
    ans[diff] = '1';
    int temp = diff;
    while (same)
    {
        temp += 2;
        if (n & 1)
        {
            ans[temp - 1] = '1';
            ans[temp] = '1';
        }
        else
        {
            ans[temp] = '1';
        }
        same--;
    }
    if (temp < n && n & 1)
        ans[temp + 1] = '1';
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