#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (((n * (n + 1)) / 2) % n == 0 && n != 1)
        cout << -1 << endl;
    else
    {
        int val = ((n * (n + 1)) / 2) % n;
        vector<int> v, ans;
        int j = n - 1;
        int i = 1;
        v.push_back(0);
        bool temp = 0;
        while (v.size() < n - 1)
        {
            if (!temp)
            {
                if (j == val)
                    j--;
                v.push_back(j);
                j--;
                temp = 1;
            }
            else
            {
                if (i == val)
                    i++;
                v.push_back(i);
                i++;
                temp = 0;
            }
        }
        v.push_back(val);
        ans.push_back(n);
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i - 1])
                ans.push_back(v[i] - v[i - 1]);
            else
                ans.push_back(v[i] - v[i - 1] + n);
        }
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
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