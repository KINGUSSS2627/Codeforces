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
        int n;
        cin >> n;
        vector<int> v(n);
        int cnt2 = 0;
        for (auto &it : v)
        {
            cin >> it;
            if (it == 2)
                cnt2++;
        }
        if (cnt2 & 1)
        {
            cout << -1 << endl;
        }
        else if (cnt2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cnt2 /= 2;
            int j = 0;
            int i = 0;
            for (; i < n; i++)
            {
                if (v[i] == 2)
                {
                    j++;
                }
                if (j == cnt2)
                {
                    break;
                }
            }
            cout << i + 1 << endl;
        }
    }
    ret0
}