#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int L = n * (a - b), R = n * (a + b);
        if (R < c - d || c + d < L)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}