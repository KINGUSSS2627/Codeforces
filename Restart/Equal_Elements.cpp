#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m;
    cin >> m;
    while (m--)
    {
        int p;
        cin >> p;
        vector<int> v(p, 0);
        for (auto &it : v)
        {
            cin >> it;
        }
        int maxx = *max_element(v.begin(), v.end());
        vector<int> has(maxx + 1, 0);
        for (auto &it : v)
        {
            has[it]++;
        }
        int maxx1 = *max_element(has.begin(), has.end());
        cout << p - maxx1 << endl;
    }
    return 0;
}