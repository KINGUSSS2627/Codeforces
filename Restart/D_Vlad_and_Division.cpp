//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int Bit(int n, int i)
{
    return n & (1 << i);
}

void solve()
{
    int n;
    cin >> n;
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        st.insert(l);
    }
    int cnt = 0;
    while (!st.empty())
    {
        int first = *(st.begin());
        st.erase(st.begin());

        int num = INT_MAX;
        int req = num ^ first;

        if (st.count(req))
        {
            st.erase(st.find(req));
        }
        cnt++;
    }
    cout << cnt << endl;
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