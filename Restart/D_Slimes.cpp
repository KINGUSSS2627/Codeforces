//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    vector<int> nge(n, n), pge(n, -1);

    stack<int> stk;
    stk.push(n - 1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!stk.empty() && v[stk.top()] <= v[i])
        {
            stk.pop();
        }

        if (!stk.empty())
        {
            nge[i] = stk.top();
        }

        stk.push(i);
    }

    stack<int> stkp;
    for (int i = 0; i < n; i++)
    {
        while (!stkp.empty() && v[stkp.top()] <= v[i])
        {
            stkp.pop();
        }

        if (!stkp.empty())
        {
            pge[i] = stkp.top();
        }

        stkp.push(i);
    }

    cout << "$$" << endl;
    for (auto &it : pge)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto &it : nge)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "$$" << endl;
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