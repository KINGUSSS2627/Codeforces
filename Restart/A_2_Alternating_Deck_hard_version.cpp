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
        int alice_white = 1, alice_black = 0, bob_white = 0, bob_black = 0;
        int cnt = 0, i = 2;
        while (n)
        {
            if (cnt & 1)
            {
                if (n >= (2 * i + 1))
                {
                    alice_white += i + 1;
                    alice_black += i;
                    n -= (2 * i + 1);
                }
                else
                {
                    if (!(n & 1))
                    {
                        alice_white += (n / 2);
                        alice_black += (n / 2);
                    }
                    else
                    {
                        alice_white += ((n / 2) + 1);
                        alice_black += (n / 2);
                    }
                    n = 0;
                }
            }
            else
            {
                if (n >= (2 * i + 1))
                {
                    bob_white += i;
                    bob_black += i + 1;
                    n -= (2 * i + 1);
                }
                else
                {
                    if (!(n & 1))
                    {
                        bob_white += (n / 2);
                        bob_black += (n / 2);
                    }
                    else
                    {
                        bob_white += (n / 2);
                        bob_black += ((n / 2) + 1);
                    }
                    n = 0;
                }
            }
            cnt++;
            i += 2;
        }
        cout << alice_white << " " << alice_black << " " << bob_white << " " << bob_black << endl;
    }
    ret0
}