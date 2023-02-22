#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> v;
        int i = x;
        while (i >= y)
        {
            v.push_back(i);
            i--;
        }
        int j = y + 1;
        while (j < x)
        {
            v.push_back(j);
            j++;
        }
        cout << v.size() << endl;
        for (auto &temp : v)
        {
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}