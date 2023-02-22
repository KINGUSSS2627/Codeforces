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
    int t;
    in t;
    tc
    {
        int n, k;
        in n >> k;
        // Initially already at 1
        k--;
        // if n is even they never meet and if it is odd they meet at n/2
        int temp = n / 2;
        cout << (k + (n % 2) * k / temp) % n + 1 << endl;
    }
    ret0
}