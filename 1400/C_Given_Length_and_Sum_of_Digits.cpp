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
    int n, s;
    in n >> s;
    if (s == 0)
    {
        if (n == 1)
        {
            out "0 0" << endl;
        }
        else
        {
            out "-1 -1" << endl;
        }
    }
    else
    {
        string maxx = "", minn = "";
        for (int i = 0; i < n; i++)
        {
            int h = 9;
            int t = min(h, s);
            maxx.push_back(t + '0');
            s -= t;
        }
        if (s > 0)
        {
            out "-1 -1" << endl;
        }
        else
        {
            for (int i = 0; i < maxx.size(); i++)
            {
                minn += maxx[maxx.size() - i - 1];
            }
            int k = 0;
            while (minn[k] == '0')
            {
                k++;
            }
            minn[0]++;
            minn[k]--;
            out minn << " " << maxx << endl;
        }
    }
    ret0
}