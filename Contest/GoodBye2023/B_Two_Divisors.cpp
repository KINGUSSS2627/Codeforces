//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;

    ll gc = __gcd(a, b);

    if (b % a)
    {
        cout << (a * b) / gc << endl;
    }
    else
    {
        if (a == 1)
        {
            cout << b * b << endl;
        }
        else
        {
            cout << b * (b / a) << endl;
        }
    }
}
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}