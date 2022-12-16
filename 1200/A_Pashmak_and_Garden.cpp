#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x1, y1, x2, y2;
    in x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
        cout << -1 << endl;
    else if (x1 == x2)
    {
        out x1 + abs(y1 - y2) << " " << y1;
        out " " << x2 + abs(y1 - y2) << " " << y2 << endl;
    }
    else if (y1 == y2)
    {
        out x1 << " " << y1 + abs(x1 - x2);
        out " " << x2 << " " << y2 + abs(x1 - x2) << endl;
    }
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    ret0
}