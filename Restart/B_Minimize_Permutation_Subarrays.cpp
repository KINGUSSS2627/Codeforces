#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ind2 = 0, ind1 = 0, ind = 0, maxx;
    for (auto &it : v)
    {
        cin >> it;
        if (it == 2)
        {
            ind2 = ind + 1;
        }
        if (it == 1)
        {
            ind1 = ind + 1;
        }
        if (it > v[maxx])
        {
            maxx = ind;
        }
        ind++;
    }
    maxx++;
    if (ind1 < maxx && ind2 < maxx)
    {
        if (ind1 > ind2)
        {
            cout << ind1 << " " << maxx << endl;
        }
        else
        {
            cout << ind2 << " " << maxx << endl;
        }
    }
    else if (ind1 > maxx && ind2 > maxx)
    {
        if (ind1 > ind2)
        {
            cout << ind2 << " " << maxx << endl;
        }
        else
        {
            cout << ind1 << " " << maxx << endl;
        }
    }
    else
    {
        cout << 1 << " " << 1 << endl;
    }
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