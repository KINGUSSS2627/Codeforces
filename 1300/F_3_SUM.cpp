#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> mp(10, 0);
    for (auto &it : v)
    {
        cin >> it;
        mp[it % 10]++;
    }
    for (auto &it : mp)
    {
        it = min(it, (int)3);
    }
    vector<int> v1;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j < mp[i]; j++)
            v1.push_back(i);
    }
    bool flag = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            for (int k = j + 1; k < v1.size(); k++)
            {
                if ((v1[i] + v1[j] + v1[k]) % 10 == 3)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}