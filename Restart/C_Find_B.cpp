//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    vector<int> freq(n + 1, 0), pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            freq[i + 1]++;
        }
        freq[i + 1] += freq[i];

        pref[i + 1] = v[i];
        pref[i + 1] += pref[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;

        int sum = pref[r + 1] - pref[l];
        int ones = freq[r + 1] - freq[l];

        int nonOne = (r - l + 1) - ones;
        sum -= nonOne;

        if (ones * 2 <= sum && l != r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}