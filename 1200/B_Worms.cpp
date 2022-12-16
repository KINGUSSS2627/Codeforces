#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, temp;
    in n;
    vector<int> V;
    for (int i = 0; i < n; i++)
    {
        in temp;
        if (i > 0)
            temp = temp + V[i - 1];
        V.push_back(temp);
    }
    int m;
    in m;
    while (m--)
    {
        int q;
        in q;
        auto it = lower_bound(V.begin(), V.end(), q);
        cout << it - V.begin() + 1 << endl;
    }
    ret0
}