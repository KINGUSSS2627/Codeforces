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
        int n, k;
        cin >> n >> k;
        string s(n, 'a');
        int t = 1;
        while (k > t)
        {
            k -= t;
            t++;
        }
        s[n - t - 1] = 'b';
        s[n - k] = 'b';
        cout << s << endl;
    }
    return 0;
}