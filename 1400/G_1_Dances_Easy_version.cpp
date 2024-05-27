//                                        ॐ हनुमंते नमः
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int>a(n-1), b(n), c;
    for(auto &it : a)
    {
        cin >> it;
    }
    for(auto &it : b)
    {
        cin >> it;
    }

    c.push_back(1);
    for(int i{}; i < n-1; i++)
    {
        c.push_back(a[i]);
    }

    sort(c.begin(), c.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    
    while(i < n && j < n)
    {
        if(c[i] < b[j])
        {
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    cout<<n-i<<endl;
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