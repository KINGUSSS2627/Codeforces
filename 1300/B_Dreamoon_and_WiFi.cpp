#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int nCr(int n, int r)
{
    if (n < r)
        return 0;
    int p = 1, k = 1;
    if (n - r < r)
    {
        r = n - r;
    }
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            int m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    double len = s1.size(), cp = 0, cn = 0;
    for (int i = 0; i < len; i++)
    {
        if (s1[i] == '+')
            cp++;
        else
            cn++;
    }
    double cntp = 0, cntn = 0, cntq = 0;
    for (int i = 0; i < len; i++)
    {
        if (s2[i] == '+')
            cntp++;
        else if (s2[i] == '-')
            cntn++;
        else
            cntq++;
    }
    double ans = 0;
    if (cntp > cp || cntn > cn)
        cout << fixed << setprecision(12) << ans << endl;
    else if (cntp == cp && cntn == cn)
        cout << fixed << setprecision(12) << 1 << endl;
    else
    {
        double diffp = 0, diffn = 0;
        diffp = cp - cntp, diffn = cn - cntn;
        cout << fixed << setprecision(12) << nCr(cntq, diffp) / (1.0 * pow(2, cntq)) << endl;
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