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
        vector<int> v(n);
        int m = 0, b = 0;
        for (auto &it : v)
        {
            cin >> it;
            if (it & 1)
                b += it;
            else
                m += it;
        }
        if (m > b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}