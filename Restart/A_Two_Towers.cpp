#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
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
        string a, b;
        cin >> a >> b;
        int cnt_p = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                cnt_p++;
        }
        for (int i = 0; i < m - 1; i++)
        {
            if (b[i] == b[i + 1])
                cnt_p++;
        }
        if (cnt_p > 1)
        {
            cout << "NO" << endl;
        }
        else if (cnt_p == 1 && a[n - 1] == b[m - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    ret0
}