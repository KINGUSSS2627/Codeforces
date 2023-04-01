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
        int n;
        cin >> n;
        if (n & 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n / 2 << " " << n / 2 << " " << 0 << endl;
        }
    }
    return 0;
}