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
        int n, m;
        cin >> n >> m;
        cout << m * (m - 1) / 2 + m * (n * (n + 1)) / 2 << endl;
    }
    return 0;
}