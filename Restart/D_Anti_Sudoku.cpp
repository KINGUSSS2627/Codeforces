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
    while (t--)
    {
        vector<string> v(9);
        int j = 0;
        for (int i = 0; i < 9; i++)
        {
            cin >> v[i];
            for (int j = 0; j < v[i].size(); j++)
            {
                if ((v[i])[j] == '9')
                    (v[i])[j] = '1';
            }
        }
        for (int i = 0; i < 9; i++)
        {
            cout << v[i] << endl;
        }
    }

    return 0;
}