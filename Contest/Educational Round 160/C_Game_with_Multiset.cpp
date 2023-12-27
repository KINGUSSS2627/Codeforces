#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> elm(35, 0);
    while (n--)
    {
        int t, m;
        cin >> t >> m;
        if (t == 1)
        {
            elm[m]++;
        }
        else
        {
            vector<int> tmp = elm;
            bool f = 1;
            int cnt = 0;
            while (cnt < 32)
            {
                if ((m >> cnt) % 2 == 1)
                {
                    if (!tmp[cnt])
                    {
                        f = 0;
                    }
                    else
                    {
                        tmp[cnt]--;
                    }
                }
                cnt++;
                tmp[cnt] += tmp[cnt - 1] / 2;
            }

            if (f)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main()
{
    solve();
    return 0;
}
