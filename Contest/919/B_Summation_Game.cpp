//                                        ॐ हनुमंते नमः
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k>> x;

    vector<int>v(n);
    int sum = 0;
    for(auto &it : v)
    {
        cin >> it;
        sum += it;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    vector<int>pref;
    pref.push_back(0);
    pref.push_back(v[0]);

    for(int i{1}; i < n; i++)
    {
        pref.push_back(pref.back() + v[i]);
    }
    
    int maxx = -1e9, i {}, ans{};
    while(i <= k)
    {
        if(i >= n)
        {
            maxx = max((int)0, maxx);
            break;
        }
        else
        {   
            ans = sum - pref[i];
            int mind = min(n, i+x);
            ans -= 2* (pref[mind] - pref[i]);
            maxx = max(maxx, ans);

        }
        i++;
    }
    cout<< maxx<<endl;
}
int32_t main()
{
int tc=1;
cin>>tc;
while(tc--)
{
solve();
}
return 0;
}