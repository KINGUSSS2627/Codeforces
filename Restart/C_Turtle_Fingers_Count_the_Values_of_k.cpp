//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int log_ab(int a, int b)
{
    int ans = 0;
    while (a > 1)
    {
        a /= b;
        ans++;
    }
    return ans;
}

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;

    int cntA = 0, cntB = 0;

    int temp = l;
    while (temp % a == 0 && a != 1)
    {
        cntA++;
        temp /= a;
    }

    temp = l;
    while (temp % b == 0 && b != 1)
    {
        cntB++;
        temp /= b;
    }

    if (!cntA && !cntB)
    {
        cout << 1 << endl;
    }
    else
    {
        map<int, int> cnt;
        for (int i = 0; i <= cntA; i++)
        {
            for (int j = 0; j <= cntB; j++)
            {
                int tmp = pow(a, i) * pow(b, j);

                if (l % tmp == 0)
                {
                    cnt[l / tmp]++;
                }
            }
        }

        cout << cnt.size() << endl;
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