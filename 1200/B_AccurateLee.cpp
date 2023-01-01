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
        string s;
        in s;
        // Counting leading zeros and trailing ones as to make lexographically smallest all 00----0-(1100110)-1---111 the rhings under () can be made zero but the trailing one and leading zeros cant be converted hence they will not change res to get min we change the rest item to 0
        int flag = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < s[i - 1])
                flag = 0;
        }
        if (flag)
        {
            out s << endl;
            continue;
        }
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                break;
            ans.push_back('0');
        }
        ans.push_back('0');
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                break;
            ans.push_back('1');
        }
        out ans << endl;
    }
    ret0
}