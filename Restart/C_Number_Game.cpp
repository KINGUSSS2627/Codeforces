#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
bool chk_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
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
        int n;
        cin >> n;
        bool ok = false;
        string s1 = "FastestFinger", s2 = "Ashishgup";
        if (n > 2 && n % 2 == 0)
        {
            if (!(n & (n - 1)))
            {
                ok = 1;
            }
            else if (n % 4 != 0 && chk_prime(n / 2))
            {
                ok = 1;
            }
            else
            {
                ok = 0;
            }
        }
        if (n == 1 || ok)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << s2 << endl;
        }
    }
    return 0;
}