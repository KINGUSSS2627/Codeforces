#include <bits/stdc++.h>
using namespace std;

int Query_Fucntion(int argu)
{
    cout << argu << endl;
    int in;
    cin >> in;
    return in;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[0] >= 1)
    {
        int x = 0;
        int query = Query_Fucntion(x);
        if (query == -1)
        {
            return;
        }
    }
    else
    {
        int len = 0;
        int i = 0;
        while (i < n - 1 && v[i + 1] == v[i] + 1)
        {
            i++;
        }
        int temp = v[i] + 1;
        while (temp)
        {
            int query = Query_Fucntion(temp);
            temp = query;
        }
        int query = Query_Fucntion(0);
        if (query == -1)
        {
            return;
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