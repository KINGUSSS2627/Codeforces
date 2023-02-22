#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        if (k != 1)
            for (int i = 1; i <= n / 2; i++)
            {
                v.push_back(n - i + 1);
                v.push_back(i);
            }
        else
            for (int i = 1; i <= n; i++)
            {
                v.push_back(i);
            }

        if (n % 2 != 0 && k != 1)
            v.push_back(n / 2 + 1);
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}
