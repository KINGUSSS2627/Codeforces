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
    int t;
    in t;
    tc
    {
        int n;
        in n;
        vector<int> v(n);
        for (auto &it : v)
        {
            in it;
        }
        // Alice Tie Bob
        sort(v.begin(), v.end(), greater<int>());
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                {
                    temp += v[i];
                }
            }
            else
            {
                if (v[i] % 2 == 1)
                {
                    temp -= v[i];
                }
            }
        }
        if (temp == 0)
        {
            out "Tie" << endl;
        }
        else if (temp > 0)
        {
            out "Alice" << endl;
        }
        else
        {
            out "Bob" << endl;
        }
    }
    ret0
}