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
        int n, a, b;
        in n >> a >> b;
        if (a + b + 2 > n)
        {
            out - 1 << endl;
        }
        else if (abs(a - b) > 1)
        {
            out - 1 << endl;
        }
        else
        {
            int flag = 0;
            vector<int> v(n);
            for (int i = 0; i < n; i++)
            {
                v[i] = i + 1;
            }
            if (a == 0 && b == 0)
            {
            }
            else if (a == 1 && b == 0)
            {
                swap(v[n - 1], v[n - 2]);
            }
            else if (a == 0 && b == 1)
            {
                swap(v[0], v[1]);
            }
            else if (a == b)
            {
                int i = n - 1;
                while (a != 0 && i >= 0)
                {
                    swap(v[i], v[i - 1]);
                    i -= 2;
                    a--;
                }
                swap(v[0], v[1]);
            }
            else if (a > b)
            {
                int i = n - 1;
                while (a != 0 && i >= 0)
                {
                    swap(v[i], v[i - 1]);
                    i -= 2;
                    a--;
                }
            }
            else
            {
                int i = 0;
                while (b != 0 && i < n)
                {
                    swap(v[i], v[i + 1]);
                    i += 2;
                    b--;
                }
            }
            for (auto &it : v)
            {
                out it << " ";
            }
            out endl;
        }
    }
    ret0
}