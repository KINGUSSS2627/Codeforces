//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

int sum(int n)
{
    int dsum = 0;
    while (n)
    {
        dsum += n % 10;
        n /= 10;
    }
    return dsum;
}

int req(int n)
{
    int cnt = 0;
    while (n && n % 10 == 0)
    {
        cnt++;
        n /= 10;
    }
    return (10 - n % 10) * pow(10, cnt);
}

void solve()
{
    int n, s;
    cin >> n >> s;

    int step = 0;
    while (sum(n) > s)
    {
        int r = req(n);
        n += r;
        step += r;
    }

    cout << step << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}