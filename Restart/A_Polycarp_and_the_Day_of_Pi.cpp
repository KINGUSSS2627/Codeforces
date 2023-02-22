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
    string pi = "314159265358979323846264338327950288419716939937510";
    int flag = 0;
    tc
    {
        string s;
        in s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        out c << endl;
    }
    ret0
}