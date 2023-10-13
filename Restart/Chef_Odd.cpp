#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int oc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            oc++;
        }
    }
    if (n < 2 * k)
    {
        cout << "NO" << endl;
    }
    else
    {

        if (n % 4 == 0)
        {
            if (k % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (n % 2 == 0)
        {
            if (k % 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            // if (oc % 2 == 0 && k <= ceil(oc / 3))
            // {
            //     cout << "YES" << endl;
            // }
            // else
            // {
            //     cout << "NO" << endl;
            // }
            n -= 5;
            k--;
            if (n % 4 == 0)
            {
                if (k % 2 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (n % 2 == 0)
            {
                if (k % 2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
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