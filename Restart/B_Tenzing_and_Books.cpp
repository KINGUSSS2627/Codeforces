#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool chk(int &know, vector<int> &a, int &x)
{
    if (x == 0)
    {
        return 1;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > x)
            break;
        if ((a[i] | x) == x)
        {
            know = (know | a[i]);
            if (know == x)
                return 1;
        }
        else
            break;
    }
    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int know = 0, flag = 0;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        bool t1 = chk(know, a, x);
        if (t1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool t2 = chk(know, b, x);
            if (t2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                bool t3 = chk(know, c, x);
                if (t3)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}