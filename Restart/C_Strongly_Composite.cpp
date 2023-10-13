#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
const int p = 1e9 + 7;
vector<int> prime_f(1e7 + 1, -1);
void precompute()
{
    prime_f[1] = 1;
    for (int i = 2; i < prime_f.size(); i++)
    {
        if (prime_f[i] == -1)
        {
            prime_f[i] = i;
            if ((i * i) <= prime_f.size() - 1)
            {
                for (int j = i * i; j < prime_f.size(); j += i)
                {
                    if (prime_f[j] == -1)
                        prime_f[j] = i;
                }
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &it : v)
    {
        cin >> it;
        int num = it;
        while (it > 1)
        {
            mp[prime_f[it]]++;
            it /= prime_f[it];
        }
        it = num;
    }
    int cnt = 0, grp_of_3 = 0;
    for (auto it : mp)
    {
        cnt += it.second / 2;
        it.second = it.second % 2;
        if (it.second && it.second < 2)
        {
            grp_of_3++;
        }
    }
    cout << cnt + grp_of_3 / 3 << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}