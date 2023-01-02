#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    tc
    {
        int n;
        in n;
        vector<int> v(n);
        for (auto &it : v)
        {
            in it;
        }
        unordered_map<int, int> count;
        int maxx = 0;
        bool check[n + 1][110] = {};
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (!check[i][v[i] + v[j]] && !check[j][v[i] + v[j]])
                {
                    count[v[i] + v[j]]++;
                    check[i][v[i] + v[j]] = true;
                    check[j][v[i] + v[j]] = true;
                    maxx = max(maxx, count[v[i] + v[j]]);
                }
            }
        }
        out maxx << endl;
    }
    ret0
}