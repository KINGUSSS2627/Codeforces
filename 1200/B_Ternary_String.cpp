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
        string s;
        in s;
        int n = s.length();
        set<int> s1;
        for (int i = 0; i < n; i++)
        {
            s1.insert(s[i]);
        }
        if (s1.size() < 3)
        {
            out 0 << endl;
        }
        else
        {
            vector<pair<int, int>> v1;
            int i = 0, j = 1;
            v1.push_back({i, s[i]});
            while (j < n)
            {
                if (s[i] == s[j])
                {
                    j++;
                }
                else
                {
                    i = j;
                    j++;
                    v1.push_back({i, s[i]});
                }
            }
            vector<int> v;
            for (int i = 0; i < v1.size() - 2; i++)
            {
                if (v1[i].second != v1[i + 1].second && v1[i + 1].second != v1[i + 2].second && v1[i + 2].second != v1[i].second)
                {
                    v.push_back(v1[i + 2].first - v1[i + 1].first + 2);
                }
            }
            sort(v.begin(), v.end());
            out v[0] << endl;
        }
    }
    ret0
}