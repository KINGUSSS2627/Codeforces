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
        vector<int> val(n);
        vector<int> type(n);
        bool flag_1 = 0, flag_0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> type[i];
            if (type[i] == 0)
                flag_0 = 1;
            else
                flag_1 = 1;
        }
        if ((flag_0 && flag_1) || is_sorted(val.begin(), val.end()))
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