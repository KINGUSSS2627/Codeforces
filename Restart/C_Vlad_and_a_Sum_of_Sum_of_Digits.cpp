//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

vector<int> sum(1e6 + 1, 0);

int digSum(int n)
{
    int dsum = 0;
    while (n)
    {
        dsum += (n % 10);
        n /= 10;
    }
    return dsum;
}

void solve()
{
    int n;
    cin >> n;
    cout << sum[n] << endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;

    for (int i = 1; i < 1e6; i++)
    {
        sum[i] = sum[i - 1] + digSum(i);
    }

    while (tc--)
    {
        solve();
    }
    return 0;
}