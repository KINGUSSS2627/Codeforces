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
        int cneg1 = 0;
        for (auto &it : v)
        {
            cin >> it;
            if (it == -1)
            {
                cneg1++;
            }
        }
        if (cneg1 == 0)
        {
            cout << n - 4 << endl;
        }
        else if (cneg1 == 1)
        {
            cout << n - 2 << endl;
        }
        else
        {
            bool flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == -1 && v[i + 1] == -1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << n - 2 * cneg1 + 4 << endl;
            }
            else
            {
                cout << n - 2 * cneg1 << endl;
            }
        }
    }
    ret0
}