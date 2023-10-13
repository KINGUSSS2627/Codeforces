#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int neg = 0, pos = 0;
    for (auto &it : v)
    {
        cin >> it;
        if (it > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    if (pos == n)
    {
        cout << "0" << endl;
    }
    else if (neg < pos)
    {

        if (neg % 2 == 0)
        {
            cout << "0" << endl;
            ;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    else if (neg == pos)
    {
        if (neg % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    else
    {

        int half = n / 2;
        int df = neg - half;
        if (half % 2 != 0)
            df++;

        cout << df << endl;
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