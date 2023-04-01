#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        int k = n;
        n *= 2;
        n -= 2;
        vector<string> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        vector<string> a;
        for (int i = 0; i < n; i++)
        {
            if (v[i].size() == k - 1)
                a.push_back(v[i]);
        }
        if (a[0].substr(1) != a[1].substr(0, k - 2))
        {
            swap(a[1], a[0]);
        }
        string ans = "";
        ans += a[0];
        ans += a[1][k - 2];
        string rev = "";
        rev = ans;
        reverse(ans.begin(), ans.end());
        if (ans == rev)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}