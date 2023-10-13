#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &it : v)
    {
        cin >> it;
        sum += it;
        mp[it]++;
    }

    if (sum % n)
    {
        cout << "No" << endl;
    }
    else
    {
        int avg = sum / n;
        bool f = 0;
        for (int i = 0; i < n; i++)
        {
            if ((avg - v[i]) & 1 && avg - v[i] > 1)
            {
                f = 1;
            }
        }

        if (f)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}