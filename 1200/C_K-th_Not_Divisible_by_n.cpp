#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ((k - 1) / (n - 1)) + k << endl;
        }
    }
    return 0;
}