#include <bits/stdc++.h>
using namespace std;
#define int long long
const int p = 1e9 + 7;
int mod_mul(int a, int b, int m)
{
    return ((a % m) * (b % m)) % m;
}
int mod_add(int a, int b, int m)
{
    return ((a % m) + (b % m)) % m;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            hash[v[i]]++;
        }
        int i = 1;
        int ans = 0, mul = 1;
        for (auto &it : hash)
        {
            if (it.first != i)
                break;

            mul = mod_mul(mul, it.second, p);
            ans = mod_add(ans, mul, p);
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}