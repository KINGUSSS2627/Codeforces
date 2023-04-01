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
        int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        for (int possibleDiff = 1; possibleDiff <= diff; possibleDiff++)
        {
            if (diff % possibleDiff)
                continue;
            if (diff / possibleDiff > n - 1)
                continue;
            int k = min((y - 1) / possibleDiff, n - 1);
            int first = y - k * possibleDiff;
            for (int i = 0; i < n; i++)
            {
                cout << first + i * possibleDiff << " ";
            }
            cout << endl;
            break;
        }
    }
    return 0;
}