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
        int n, a, b;
        cin >> n >> a >> b;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            int i;
            for (i = 1; i <= n; i *= a)
            {
                if ((n - i) % b == 0)
                {
                    cout << "Yes" << endl;
                    break;
                }
            }
            if (i > n)
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}