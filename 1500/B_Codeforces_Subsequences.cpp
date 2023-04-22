#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "codeforces" << endl;
    }
    else
    {
        vector<int> v(10, 1);
        int mul = 1, i = 0;
        int temp = 1;
        while (mul < n)
        {
            mul = mul / v[i % 10];
            v[i % 10]++;
            mul *= v[i % 10];
            i++;
        }
        vector<char> c = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
        string ans = "";
        for (int i = 0; i < 10; i++)
        {
            while (v[i]--)
            {
                ans += c[i];
            }
        }
        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}