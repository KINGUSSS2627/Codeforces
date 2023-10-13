#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    // a|b - c&b
    bitset<30> sa(b);
    bitset<30> sb(a);
    bitset<30> xorr("111111111111111111111111111111");
    for (int i = 0; i < 30; i++)
    {
        xorr[i] = (xorr[i] != sb[i]);
    }
    int cnt = 0;
    for (int i = 0; i < 30; i++)
    {
        if (xorr[i] == sa[i])
        {
            cnt++;
        }
    }
    cout << (int)pow(2, cnt) << endl;
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