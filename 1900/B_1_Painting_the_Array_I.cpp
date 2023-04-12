// isko mem me convert nahi kar paaya
// #include <bits/stdc++.h>
// #define int long long int
// #define tc while (t--)
// using namespace std;
// int seg(vector<int> &v)
// {
//     int cnt = 1, n = v.size();
//     for (int i = 1; i < n; i++)
//     {
//         if (v[i - 1] != v[i])
//             cnt++;
//     }
//     if (v.size() == 0)
//         cnt = 0;
//     return cnt;
// }
// int rec(int ind, vector<int> &v, vector<int> &w, vector<int> &b)
// {
//     if (ind == v.size())
//     {
//         return 0;
//     }
//     w.push_back(v[ind]);
//     int white = max(seg(w) + seg(b), rec(ind + 1, v, w, b));
//     w.pop_back();
//     b.push_back(v[ind]);
//     int black = max(seg(w) + seg(b), rec(ind + 1, v, w, b));
//     b.pop_back();
//     return max(black, white);
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &it : v)
//     {
//         cin >> it;
//     }
//     vector<int> w, b;
//     cout << rec(0, v, w, b) << endl;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> t[n + 1], ans1, ans2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        t[v[i]].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        // reverse to pop the smallest one first
        reverse(t[i].begin(), t[i].end());
    }
    int l1 = 0, l2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == l1 && l1 == l2)
        {
            t[v[i]].pop_back();
            continue;
        }
        if (v[i] == l1)
        {
            ans2.push_back(v[i]);
            l2 = v[i];
        }
        else if (v[i] == l2)
        {
            ans1.push_back(v[i]);
            l1 = v[i];
        }
        else
        {
            int x = n, y = n;
            if (t[l1].size() > 0)
                x = t[l1].back();
            if (t[l2].size() > 0)
                y = t[l2].back();
            if (x >= y)
            {
                ans2.push_back(v[i]);
                l2 = v[i];
            }
            else
            {
                ans1.push_back(v[i]);
                l1 = v[i];
            }
        }
        t[v[i]].pop_back();
    }
    cout << ans1.size() + ans2.size() << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}