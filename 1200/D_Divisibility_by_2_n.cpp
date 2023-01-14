#include <bits/stdc++.h>
#define int long long int
#define tc while (k--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
void f(int n, vector<pair<int, int>> &m)
{
    for (int i = 2; i <= n; i++)
    {
        int c = 0, t = i;
        while (t % 2 == 0)
        {

            c++;
            t = t / 2;
        }
        m.push_back({i, c});
    }
    sort(m.begin(), m.end(), cmp);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    in k;
    tc
    {
        vector<pair<int, int>> m;
        int n;
        in n;
        f(n, m);
        vector<int> v(n);
        int c2 = 0;
        for (auto &it : v)
        {
            in it;
            while (it % 2 == 0)
            {
                c2++;
                it = it / 2;
            }
        }
        int t = n - c2;

        if (t <= 0)
        {
            out "0" << endl;
        }
        else
        {
            int count = 0;
            for (auto &pr : m)
            {
                t -= pr.second;
                count++;
                if (t <= 0)
                    break;
            }
            if (t > 0)
                cout << -1 << endl;
            else
                cout << count << endl;
        }
    }
    ret0
}