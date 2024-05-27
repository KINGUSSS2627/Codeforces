//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int b{};
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            b++;
        }
    }

    if (b == k)
    {
        cout << 0 << endl;
    }
    else if (b > k)
    {
        cout << 1 << endl;
        int i{};
        for (i; i < n; i++)
        {
            if (s[i] == 'B')
            {
                b--;
                if (b == k)
                {
                    break;
                }
            }
        }
        cout << i + 1 << " "
             << "A" << endl;
    }
    else
    {
        int i{};
        for (i; i < n; i++)
        {
            if (s[i] == 'A')
            {
                b++;
                if (b == k)
                {
                    break;
                }
            }
        }
        cout << 1 << endl;
        cout << i + 1 << " "
             << "B" << endl;
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