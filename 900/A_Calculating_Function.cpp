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
    int n;
    in n;
    int fun = pow(-1, n) * n;
    if (n % 2 == 0)
        out fun / 2 << endl;
    else
        out(fun - 1) / 2 << endl;
    ret0
}