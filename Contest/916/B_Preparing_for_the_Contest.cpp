//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int kk = k;
    kk++;
    k++;
    while (kk--)
    {
        cout << n - kk << " ";
    }

    for (int i = n - k; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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