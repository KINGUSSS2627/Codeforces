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
        int n, y;
        in n >> y;
        int t = 0;
        vector<int> v(n);
        for (auto &i : v)
        {
            in i;
            t = t | i;
        }
        int flag = 1;
        int x = (int)(log2(t));
        string s = bitset<64>(t).to_string().substr(64 - x - 1);
        int x1 = (int)(log2(y));
        string s1 = bitset<64>(y).to_string().substr(64 - x1 - 1);
        if (t > y)
        {
            out - 1 << endl;
        }
        else
        {
            int t1 = s1.length(), t2 = s.length();
            int len = abs(t1 - t2);
            for (int i = 0; i < len; i++)
            {
                if (s.length() < s1.length())
                    s = '0' + s;
                else
                    s1 = '0' + s1;
            }

            vector<int> indx;
            for (int i = s1.length() - 1; i >= 0; i--)
            {
                if (s[i] == '0' && s1[i] == '1')
                {

                    indx.push_back(s1.length() - i - 1);
                }
                else if (s[i] == '1' && s1[i] == '0')
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0)
            {
                out - 1 << endl;
            }
            else
            {
                int outt = 0;
                for (auto &p : indx)
                {
                    outt += (int)pow(2, p);
                }
                out outt << endl;
            }
        }
    }
    ret0
}