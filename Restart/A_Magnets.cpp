#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p;
    cin >> p;
    vector<int> v(p);
    for (auto &it : v)
    {
        cin >> it;
    }
    int ans = 0;
    for (int i = 0; i < p; i++)
    {
        if (v[i] != v[i + 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}