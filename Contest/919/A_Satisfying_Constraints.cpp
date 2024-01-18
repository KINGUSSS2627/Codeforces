//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
   int n;
   cin >> n;
   int low = 0, high = 1e9;
   set<int>st;

   while(n--)
   {
        int t, a;
        cin>>t>>a;
        if(t == 1)
        {
            low = max(low, a);
        }
        else if(t == 2)
        {
            high = min(high , a);
        }
        else
        {
            st.insert(a);
        }
   }


    if(high < low)
    {
        cout<<0<<endl;
        return;
    }
   int ans = high - low +1;
   int cnt = 0;
   for(auto &it : st)
   {
        if(it >= low && it <= high)
        {
            cnt++;
        }
   }
   cout<<ans-cnt<<endl;
}
int32_t main()
{   
    int tc = 1;
    cin >>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
