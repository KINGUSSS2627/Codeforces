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
        int cnt = 0;
        vector<vector<int>> v(2, vector<int>(2, 0));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> v[i][j];
                if (v[i][j] == 0)
                    cnt++;
            }
        }
        if (cnt == 4)
        {
            cout << 0 << endl;
        }
        else if (cnt == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}