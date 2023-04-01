#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int findPrime(int n)
{
    // for odd only i==2 is alredy coverd
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
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
        if (n & 1)
        {
            int t = findPrime(n);
            t = n / t;
            cout << t << " " << n - t << endl;
        }
        else
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
    }
    return 0;
}