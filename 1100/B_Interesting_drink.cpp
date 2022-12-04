#include <bits/stdc++.h>
using namespace std;

#define int long long int
int32_t main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        auto i = upper_bound(v.begin(), v.end(), k);

        cout << i - v.begin() << endl;
    }

    return 0;
}