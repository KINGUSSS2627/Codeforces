#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n < 4)
    {
        cout << -1 << endl;
        return; 
    }

    for (int i = n; i >= 1; i--)
    {
        if (i & 1)
        {
            cout << i << " ";
        }
    }
    cout << 4 << " " << 2 << " ";
    for (int i = 6; i <= n; i++)
    {
        if (!(i & 1))
        {
            cout << i << " ";
        }
    }
    cout << endl;
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