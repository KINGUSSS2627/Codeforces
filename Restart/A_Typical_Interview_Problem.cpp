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
        int k;
        cin >> k;
        string s;
        cin >> s;
        string s1 = "FBFFBFFBFBFFBFFBFBFFBFFB";
        int j = 0, n = s1.size();
        bool flag = 0;
        while (j <= n - k)
        {
            if (s == s1.substr(j, k))
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}