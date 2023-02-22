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
        int n, z;
        cin >> n >> z;
        vector<int> v(n, 0);
        for (auto &it : v)
        {
            cin >> it;
            it = it | z;
        }
        cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}