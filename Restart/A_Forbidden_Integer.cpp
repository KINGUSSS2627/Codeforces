#include <bits/stdc++.h>
#include <iostream>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        int t1 = n;
        while (t1--)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        if (n == 1 || k <= 1)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            int t1 = n / 2;
            while (t1--)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        else if (k > 2)
        {
            cout << "YES" << endl;
            cout << (n - 3) / 2 + 1 << endl;
            int t1 = (n - 3) / 2 + 1;
            while (t1--)
            {
                cout << 2 << " ";
            }
            cout << 3 << endl;
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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