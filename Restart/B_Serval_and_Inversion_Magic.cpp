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
        string s;
        cin >> s;
        int cntd = 0;
        int l = 0, h = n - 1;
        if (s[l] != s[h])
            cntd++;
        l++, h--;
        while (l <= h)
        {
            if (s[l] != s[h] && s[l - 1] == s[h + 1])
                cntd++;
            l++;
            h--;
        }
        if (cntd == 1 || cntd == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}