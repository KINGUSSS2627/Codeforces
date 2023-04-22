#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.first - p1.second < p2.first - p2.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    int k = 0;
    while (k < n)
    {
        cin >> v1[k];
        k++;
    }
    k = 0;
    while (k < n)
    {
        cin >> v2[k];
        k++;
    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
            break;
    }
    int j = n - 1;
    for (j = n - 1; j >= 0; j--)
    {
        if (v1[j] != v2[j])
            break;
    }
    while (i > 0)
    {
        if (min(v1[i], v2[i]) >= v2[i - 1])
            i--;
        else
            break;
    }
    while (j < n - 1)
    {
        if (max(v1[j], v2[j]) <= v2[j + 1])
            j++;
        else
            break;
    }
    cout << i + 1 << " " << j + 1 << endl;
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