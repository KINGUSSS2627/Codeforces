//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n, 0);

    for (auto &it : v)
    {
        cin >> it;
    }

    vector<ll> pref, odd(n, 0);
    pref.push_back(v[0]);
    for (int i{1}; i < n; i++)
    {
        pref.push_back(pref.back() + v[i]);
    }

    if (v[0] & 1)
    {
        odd[0]++;
    }

    for (int i{1}; i < n; i++)
    {
        odd[i] += odd[i - 1];
        if (v[i] & 1)
        {
            odd[i]++;
        }
    }

    for (int i{}; i < n; i++)
    {
        int res = odd[i] % 3;
        int rem = odd[i] / 3;

        if (res == 1 && i)
        {
            rem++;
        }

        cout << pref[i] - rem << " ";
    }
    cout << endl;
}

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}