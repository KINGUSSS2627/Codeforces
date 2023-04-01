#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
const int mod = 1e9 + 7;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y, n;
    cin >> x >> y;
    cin >> n;
    vector<int> v;
    v.push_back(x - y);
    v.push_back(x);
    v.push_back(y);
    v.push_back(y - x);
    v.push_back(-x);
    v.push_back(-y);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            v[i] += mod;
        }
        v[i] = v[i] % mod;
    }
    if (v[n % 6] < 0)
        cout << v[n % 6] + mod << endl;
    else
        cout << v[n % 6] << endl;
    return 0;
}