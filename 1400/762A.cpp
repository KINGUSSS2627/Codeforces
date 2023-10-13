#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> fact;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);
            if (n / i != i)
            {
                fact.push_back(n / i);
            }
        }
    }

    sort(fact.begin(), fact.end());
    if (k > fact.size())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << fact[k - 1] << endl;
    }
}

int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}