#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
    int i = 0, j = n - 1, cnt = 0, sa = 0, sb = 0, swap = 0, ta = 0, tb = 0;
    while (i <= j)
    {
        if (swap ^ 1)
        {
            while (sa <= sb)
            {
                if (i <= j)
                    sa += v[i];
                else
                    break;
                i++;
            }
            ta += sa;
            sb = 0;
        }
        else
        {
            while (sb <= sa)
            {
                if (j >= i)
                    sb += v[j];
                else
                    break;
                j--;
            }
            tb += sb;
            sa = 0;
        }
        swap = swap ^ 1;
        cnt++;
    }
    cout << cnt << " " << ta << " " << tb << endl;
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