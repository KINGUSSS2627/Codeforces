#include <bits/stdc++.h>
using namespace std;
bool solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while ((a != c) || (b != d))
    {
        if (c > d)
            c -= d;
        else
            d -= c;
        if (a == c && b == d)
            return 1;
        if (a > c || b > d)
            return 0;
    }
    return 0;
}
int main()
{
    cout << solve();
    return 0;
}