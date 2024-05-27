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
    int k = 1;
    tc
    {
        int n;
        cin >> n;
        int i = 1;
        while (26 * i < n)
        {
            n -= 26 * i;
            i++;
        }
        if (n % i == 0)
        {
            cout << "Case #" << k << ": ";
            cout << (char)('A' + (n / i - 1) % 26) << endl;
        }
        else
        {
            cout << "Case #" << k << ": ";
            cout << (char)('A' + (n / i) % 26) << endl;
        }
        k++;
    }
    return 0;
}