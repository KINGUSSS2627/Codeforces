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

    vector<int> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            ans.push_back(v[i]);
        }
        else
        {

            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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