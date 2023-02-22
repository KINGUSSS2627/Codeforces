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
        vector<int> odd;
        vector<int> even;
        int i = 1;
        for (auto &it : v)
        {
            in it;
            if (it & 1)
            {
                odd.push_back(i);
            }
            else
            {
                even.push_back(i);
            }
            i++;
        }
        if (odd.size() >= 3 || (odd.size() >= 1 && even.size() >= 2))
        {
            out "YES" << endl;
            if (odd.size() >= 3)
            {
                for (int i = 0; i < 3; i++)
                {
                    out odd[i] << " ";
                }
                out endl;
            }
            else
            {
                for (int i = 0; i < 1; i++)
                {
                    out odd[i] << " ";
                }
                for (int i = 0; i < 2; i++)
                {

                    out even[i] << " ";
                }
                out endl;
            }
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}