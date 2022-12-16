#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    multimap<int, int> m_o;
    multimap<int, int> m_e;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        int j = 0, k = 0;
        if (temp % 2 == 0)
        {
            m_e.insert({i, temp});
        }
        else
        {
            m_o.insert({i, temp});
        }
    }
    if (m_e.size() == 1)
    {
        auto it = m_e.begin();
        cout << it->first + 1 << endl;
    }
    else
    {
        auto it = m_o.begin();
        cout << it->first + 1 << endl;
    }
    return 0;
}