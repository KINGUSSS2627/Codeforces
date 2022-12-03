#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, l;
    cin >> n >> l;
    vector<double> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    // v.push_back(0);
    sort(v.begin(), v.end());
    vector<double> v1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        v1.push_back((v[i + 1] - v[i]) / 2.0);
    }
    if (v[0] != 0)
    {
        v1.push_back(v[0]);
    }
    if (v[n - 1] != l)
    {
        v1.push_back(l - v[n - 1]);
    }
    double res = 0;
    sort(v1.begin(), v1.end(), greater<double>());
    res = v1[0];
    cout << fixed << setprecision(10) << res << endl;
    return 0;
}