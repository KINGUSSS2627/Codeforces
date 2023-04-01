#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int fact(int n)
{
    if (n < 1)
        return 1;
    return (n)*fact(n - 1);
}
void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
    {
        cout << fact(n) << endl;
    }
    else if (n & 1)
    {
        cout << n * (n - 1) * (n - 2) << endl;
    }
    else
    {
        if (n % 3 == 0)
            cout << (n - 1) * (n - 2) * (n - 3) << endl;
        cout << n * (n - 1) * (n - 3) << endl;
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