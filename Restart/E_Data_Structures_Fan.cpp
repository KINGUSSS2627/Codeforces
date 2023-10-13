#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    string s;
    cin >> s;

    int xor_z = 0, xor_o = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            xor_z ^= v[i];
        }
        else
        {
            xor_o ^= v[i];
        }
    }

    vector<int> pref_xor(n + 1, 0);
    pref_xor[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref_xor[i] = pref_xor[i - 1] ^ v[i - 1];
    }

    // for (auto &it : pref_xor)
    // {
    //     cout << it << " ";
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int tp;
        cin >> tp;
        if (tp == 1)
        {
            int l, r;
            cin >> l >> r;
            int change = pref_xor[r] ^ pref_xor[l - 1];
            xor_o ^= change;
            xor_z ^= change;
        }
        else
        {
            int g;
            cin >> g;
            if (!g)
            {
                cout << xor_z << " ";
            }
            else
            {
                cout << xor_o << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}