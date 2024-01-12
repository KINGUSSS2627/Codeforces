//                                        ॐ हनुमंते नमः
#include<bits/stdc++.h>
#define int long long int
const int mod = 1e9+7;
using namespace std;
void solve()
{
    string s;
    cin>>s;


    for(auto &it : s)
    {
        if(it == 'm' || it == 'w')
        {
            cout<<0<<endl;
            return;
        }
    }

    int n = s.size();
    vector<int>dp(n+1, 0);
    
    dp[0] = 1;
    dp[1] = 1;

    for(int i{2}; i <= n ;i++)
    {
        if(s[i-1] ==s[i-2] &&(s[i-1]=='u' || s[i-1] =='n'))
        {
            dp[i] = (dp[i-1] + dp[i-2])%mod;
        }
        else
        {
            dp[i] = dp[i-1] %mod;
        }
    }

    cout<<dp[n]<<endl;
}
int32_t main()
{
int tc=1;
// cin>>tc;
while(tc--)
{
solve();
}
return 0;
}