#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
using namespace std;

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
        n--;
        int alice = 1, bob = 0;
        int cnt = 0, i = 2;
        while (n)
        {
            if (cnt & 1)
            {
                if (n >= (2 * i + 1))
                {
                    alice += (2 * i + 1);
                    n -= (2 * i + 1);
                }
                else
                {
                    alice += n;
                    n = 0;
                }
            }
            else
            {
                if (n >= (2 * i + 1))
                {
                    bob += (2 * i + 1);
                    n -= (2 * i + 1);
                }
                else
                {
                    bob += n;
                    n = 0;
                }
            }
            cnt++;
            i += 2;
        }
        cout << alice << " " << bob << endl;
    }
    ret0
}