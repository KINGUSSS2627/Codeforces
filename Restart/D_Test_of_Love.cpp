#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define Y cout << "YES" << endl
#define NO cout << "NO" << endl
#define NP cout << "-1" << endl
const int MOD = 1000000007;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    vector<int> w, c, l;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            w.push_back(i + 1);
        }
        else if (s[i] == 'C')
        {
            c.push_back(i + 1);
        }
        else
        {
            l.push_back(i + 1);
        }
    }
    l.push_back(n + 1);

    reverse(l.begin(), l.end());
    reverse(w.begin(), w.end());

    int ans = 1;
    int start = 0;
    while (start < n + 1)
    {
        if (l.size() > 0 && l.back() - start <= m)
        {
            start = l.back();
            l.pop_back();
        }
        else
        {
            while (w.size() > 0 && w.back() < start)
            {
                w.pop_back();
            }
            if (w.size() == 0 || w.back() - start > m)
            {
                ans = 0;
                break;
                // cout << "NO" << endl;
                // return;
            }

            int new_start = w.back();
            while (w.size() > 0 && w.back() - start <= m)
            {
                new_start = w.back();
                w.pop_back();
            }

            start = new_start;
            while (start < n + 1 && s[start - 1] == 'W')
            {
                k--;
                start++;
                if (k < 0)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            if (start == n + 1)
            {
                break;
            }
            if (s[start - 1] == 'C')
            {
                ans = 0;
                break;
                // cout << "NO" << endl;
                // return;
            }
        }
    }
    ans ? cout << "YES" << endl : cout << "NO" << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}