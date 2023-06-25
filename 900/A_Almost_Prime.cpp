#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
vector<int> prime(3001, 1);
void fillPrime()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= 3000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j * j <= 3000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    int prime[n + 20] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (!prime[i])
        {
            for (int j = i; j <= n + 20; j += i)
            {
                prime[j]++;
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (prime[i] == 2)
            count++;
    }
    cout << count;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fillPrime();
    solve();
    return 0;
}