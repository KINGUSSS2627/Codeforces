#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t;
    cin >> n;
    vector<int> v;
    while (n != 0)
    {
        t = n % 10;
        if (t <= 4)
            v.push_back(t);
        else
            v.push_back(9 - t);
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    if (v[0] == 0)
    {
        v[0] = 9;
    }
    for (auto val : v)
    {
        cout << val;
    }
    return 0;
}