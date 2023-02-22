#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
int32_t main()
{
    tc
    {
        int n;
        cin >> n;
        vector<int> v[n];
        map<int, int> m1;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int m;
                cin >> m;
                v[i].push_back(m);
                m1[m]++;
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < v[i].size(); j++)
            {
                if (m1[v[i][j]] > 1)
                    count++;
            }
            if (count == v[i].size())
            {

                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}