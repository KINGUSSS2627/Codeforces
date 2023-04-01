#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        bool ok = false;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (gcd(a[i], a[j]) <= 2)
                    ok = true;
            }
        }
        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}