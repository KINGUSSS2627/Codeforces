#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
const int MAX = 1000001;
vector<bool> prime(MAX);
void sieve()
{
    prime[0] = prime[1] = true;
    for (int i = 4; i < MAX; i += 2)
        prime[i] = true;

    for (int i = 3; i * i <= MAX; i += 2)
        if (!prime[i])
            for (int j = i * i; j < MAX; j += 2 * i)
            {
                prime[j] = true;
            }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int t;
    in t;
    vector<int> v(t);
    for (auto &it : v)
    {
        in it;
    }
    for (auto &i : v)
    {
        int r = sqrt(i);
        if (!prime[r] && r * r == i)
            out "YES" << endl;
        else
            out "NO" << endl;
    }
    ret0
}
