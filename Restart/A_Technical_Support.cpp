#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Q')
                temp++;
            else
                temp--;
            if (temp < 0)
                temp = 0;
        }
        if (temp <= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    ret0
}