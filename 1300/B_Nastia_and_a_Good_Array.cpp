#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, INT_MAX);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int minPtr = min_element(v.begin(), v.end()) - v.begin(), k = 1;
    if (n == 1)
        cout << 0 << endl;
    else
    {
        cout << n - 1 << endl;
        for (int i = minPtr - 1; i >= 1; i--)
        {
            cout << minPtr << " " << i << " " << v[minPtr] << " " << v[minPtr] + k << endl;
            k++;
        }
        k = 1;
        for (int i = minPtr + 1; i <= n; i++)
        {
            cout << minPtr << " " << i << " " << v[minPtr] << " " << v[minPtr] + k << endl;
            k++;
        }
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