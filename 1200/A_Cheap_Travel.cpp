#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    float c2 = a;
    float c1 = (float)b / m;
    int t1 = a * n;

    if (c1 < c2)
    {
        int t2 = (n / m) * b + (n % m) * a;
        int t3 = (n / m) * b + 1 * b;
        if (t2 < t3)
        {
            cout << t2 << endl;
        }
        else
        {
            cout << t3 << endl;
        }
    }
    else
    {
        cout << t1 << endl;
    }
    return 0;
}