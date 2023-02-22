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
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        if (n & 1)
            cout << "Mike" << endl;
        else
        {
            auto i = min_element(v.begin(), v.end()) - v.begin();
            if (i % 2)
                cout << "Mike" << endl;
            else
                cout << "Joe" << endl;
        }
    }
    ret0
}