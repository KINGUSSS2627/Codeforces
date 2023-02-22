#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int n, m;
        cin >> n >> m;
        int cost = min(n * a, n * b);
        int temp = (n / (m + 1)) * m * a + (n % (m + 1)) * min(a, b);
        cost = min(cost, temp);
        cout << cost << endl;
    }
    return 0;
}