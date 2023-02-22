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
        for (int i = 0; i < n * n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[j] < v[j + 1])
                {
                    int t = v[j] + v[j + 1];
                    v[j] = t / 2 + t % 2;
                    v[j + 1] = t / 2;
                }
            }
        }
        out *max_element(v.begin(), v.end()) << endl;
    }
    ret0
}