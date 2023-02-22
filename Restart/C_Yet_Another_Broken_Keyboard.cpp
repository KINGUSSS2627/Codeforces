#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;
int comb(int n)
{
    return n * (n + 1) / 2;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    in n >> m;
    string s;
    in s;
    set<char> c;
    char temp;
    for (int i = 0; i < m; i++)
    {
        in temp;
        c.insert(temp);
    }
    int len = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (c.find(s[i]) != c.end())
        {
            len++;
        }
        else
        {
            ans += comb(len);
            len = 0;
        }
    }
    ans += comb(len);
    out ans << endl;
    ret0
}