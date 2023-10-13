#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int MOD = 1e9 + 7;
int mod_pow(int a, int n, int m)
{
    int res = 1;
    while (n)
    {
        if (n & 1)
        {
            res = ((res % m) * (a % m)) % m;
            n--;
        }
        a = ((a % m) * (a % m)) % m;
        n /= 2;
    }
    return res;
}
int mod_mul(int a, int b, int m)
{
    return ((a % m) * (b % m)) % m;
}
int DIV(int a, int b, int m)
{
    int mod_inv = mod_pow(b, m - 2, m);
    return mod_mul(a, mod_inv, m);
}
void fun(vector<int> &v, int r)
{
    int j = 0;
    int p = 1, k = 1;
    for (int i = 0; i < v.size(); i++)
    {
        int temp = v[i];
        while (temp)
        {
            p *= temp;
            k *= r;
            int m = __gcd(p, k);
            p = DIV(p, m, MOD);
            k = DIV(k, m, MOD);
            temp--;
            r--;
        }
    }
    cout << DIV(p, k, MOD) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int t, r;
        cin >> t >> r;
        m[t]++;
    }
    vector<int> v;
    for (auto it : m)
    {
        v.push_back(it.second);
    }
    fun(v, n);

    return 0;
}