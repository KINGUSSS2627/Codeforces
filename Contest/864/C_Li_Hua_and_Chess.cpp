#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int ask(int &a, int &b)
{
    cout << "? " << a << " " << b << endl;
    int temp;
    cin >> temp;
    return temp;
}
void anss(int &a, int &b)
{
    cout << "! " << a << " " << b << endl;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int x = 1, y = 1;
    int dist = ask(x, y);
    if (dist == 0)
    {
        anss(x, y);
        return;
    }
    x = min(n, x + dist);
    y = min(m, y + dist);
    dist = ask(x, y);
    if (dist == 0)
    {
        anss(x, y);
        return;
    }
    int x1, y1;
    x1 = x - dist;
    y1 = y;

    x = x;
    y = y - dist;

    dist = ask(x, y);
    if (dist == 0)
    {
        anss(x, y);
    }
    else
    {
        anss(x1, y1);
    }
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
