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
    int n;
    in n;
    unordered_map<string, int> m;
    while (n--)
    {
        string temp;
        in temp;
        if (m.find(temp) == m.end())
        {
            out "OK" << endl;
        }
        else
        {
            out temp << m[temp] << endl;
        }
        m[temp]++;
    }
    ret0
}