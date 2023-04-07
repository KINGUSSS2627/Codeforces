#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int sum = c1 + c2 + c3 + c4 + c5;
    if (sum / 5 == 0)
    {
        cout << -1 << endl;
    }
    else if (sum % 5 == 0)
    {
        cout << sum / 5 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}