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
        vector<int> diff;
        for (auto &it : v)
        {
            in it;
        }
        sort(v.begin(), v.end());
        int minn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            diff.push_back(v[i + 1] - v[i]);
            if (minn > diff[i])
            {
                minn = diff[i];
            }
        }
        vector<int> indx;
        for (int i = 0; i < n - 1; i++)
        {
            if (diff[i] == minn)
            {
                indx.push_back(i);
            }
        }
        sort(indx.begin(), indx.end(), greater<int>());
        int j, k;
        j = indx[0], k = j + 1;
        vector<int> ans;
        ans.push_back(v[j]);
        for (int i = indx[0] + 2; i < n; i++)
        {
            ans.push_back(v[i]);
        }
        for (int i = 0; i < indx[0]; i++)
        {
            ans.push_back(v[i]);
        }
        ans.push_back(v[k]);
        for (auto &it : ans)
        {
            out it << " ";
        }
        cout << endl;
    }
    ret0
}