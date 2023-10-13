#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define NP cout << "-1" << endl
#define input_vector(n)         \
    ;                           \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    }
#define output_vector(a)               \
    ;                                  \
    for (int i = 0; i < a.size(); i++) \
    {                                  \
        cout << a[i] << " ";           \
    }                                  \
    cout << endl;
const int p = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[0] > n)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[v[i] - 1] >= i + 1 && (v[i] == n || (v[i] < n && v[v[i]] < i + 1)))
        {
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    tc
    {
        solve();
    }
    return 0;
}