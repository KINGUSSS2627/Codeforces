#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int j = 0, i = 0;
    int sum = 0, cnt = 0;
    for (i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > t)
        {
            cnt--;
            sum -= v[j];
            j++;
        }
        cnt++;
    }
    cout << cnt << endl;
    ret0
}