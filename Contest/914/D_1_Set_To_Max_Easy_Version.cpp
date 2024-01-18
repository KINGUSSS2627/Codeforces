//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;

void find(vector<int> &a, vector<int> &b, vector<int> &vis)
{
    int n = a.size();
    vector<int> ngeA(n, 0);
    vector<int> pseB(n, 0);

    stack<pair<int, int>> st;

    st.push({n, 1e18});
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            ngeA[i] = n;
        }
        else
        {
            while (!st.empty() && st.top().second <= a[i])
            {
                st.pop();
            }
            ngeA[i] = (st.empty()) ? n : st.top().first;
        }
        st.push({i, a[i]});
    }

    // a mai ya to ye element dominate karega ya agla jo bad hai wo karega nothing else

    while (!st.empty())
    {
        st.pop();
    }

    st.push({-1, 0});
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            pseB[i] = -1;
        }
        else
        {
            while (!st.empty() && st.top().second >= b[i])
            {
                st.pop();
            }
            pseB[i] = (st.empty()) ? -1 : st.top().first;
        }
        st.push({i, b[i]});
    }

    // Mrko dekhna hai ki mai b ke left mai agar badi value hold karke baitha hu to usko use karke abhi ke chote ko overwrite kar skata hu par agar choti hui to nahi use kar paaunga to pseB

    map<int, int> posA;

    for (int i = 0; i < n; i++)
    {
        // Abhi tak jitne hai utno mai se dekhna
        posA[a[i]] = i;
        if (b[i] < a[i])
        {
            vis[i] |= 0;
        }
        else
        {
            vis[i] |= (posA.find(b[i]) != posA.end() && pseB[i] < posA[b[i]] && i < ngeA[posA[b[i]]]) ? 1 : 0;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> vis(n, 0);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }

    find(a, b, vis);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(vis.begin(), vis.end());
    find(a, b, vis);

    bool ans = 1;
    for (auto &it : vis)
    {
        ans &= it;
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}