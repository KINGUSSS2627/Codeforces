#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    /*
    a  -->   n
    b  -->   1
    x a's and y b's to make s
    */

    if (s % n <= b && 1ll * a * n + b >= s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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