//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &it : v)
    {
        cin >> it;
    }

    vector<int>a1,a2;
    a1.push_back(v[0]);
    a2.push_back(1e9);

    for(int i{1}; i < n; i++)
    {
        if(a1.back() >= v[i] && a2.back() >= v[i])
        {
            if(a1.back() <= a2.back())
            {
                a1.push_back(v[i]);
            }
            else
            {
                a2.push_back(v[i]);
            }
        }
        else if(a1.back() >= v[i])
        {
            a1.push_back(v[i]);
        }
        else if(a2.back() >= v[i])
        {
            a2.push_back(v[i]);
        }
        else if(a1.back() <= a2.back())
        {
            a1.push_back(v[i]);
        }
        else
        {
            a2.push_back(v[i]);
        }
    }

    int cnt = 0;
    for(int i{1}; i < a1.size(); i++)
    {
        if(a1[i-1] < a1[i])
        {
            cnt++;
        }
    }
    for(int i{1}; i < a2.size(); i++)
    {
        if(a2[i-1] < a2[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}