#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n);
        vector<int> unique;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if (mp[v[i]] == 1)
            {
                unique.push_back(v[i]);
            }
        }
        int a = mp.size();
        // Removing repeting element
        int initcost = (n - a) * c;
        sort(unique.begin(), unique.end());
        int n1 = unique.size();
        int j = 0;
        int finalcost = 1e17;
        for (int i = n1 - 1; i >= 0; i--)
        {
            int cost = 0;
            // i+1 is to make 0 --> 1
            cost = j * c + (unique[i] - (i + 1)) * d;
            finalcost = min(cost, finalcost);
            j++;
        }
        int cost = (n1)*c + d;
        finalcost = min(cost, finalcost);
        int finalans = finalcost + initcost;
        cout << finalans << endl;
    }
}