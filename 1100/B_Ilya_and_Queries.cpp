#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
#define ret0 return 0;
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    string s;
    in s;
    int A[s.size() + 1] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        A[i + 1] = count;
    }
    int n;
    in n;
    while (n--)
    {
        int l, r;
        in l >> r;
        out A[r - 1] - A[l - 1] << endl;
    }
    ret0
}