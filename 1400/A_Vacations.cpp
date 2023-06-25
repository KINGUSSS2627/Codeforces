#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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

    int ans = 0;
    if (v[0] == 0)
    {
        ans++;
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] == 0)
        {
            ans++;
        }

        // 1 ke pehle 2 koi dikkat nahi hai
        // 1 ke pehle 3 koi dikkat nahi par ham jo karenge wo ise 2 bana dega
        // 1 ke pehle 1 neeche
        // 2 ke pehle 1 koi dikkat nahi hai
        // 2 ke pehle 3 koi dikkat nahi par ham jo karenge wo ise 1 bana dega
        // 2 ke pehle 2 neeche
        else if (v[i] == 1 && v[i - 1] == 1)
        {
            ans++;
            // mai contest nahi de raha to na gym khula hai aur na hi contest dia to ye 0 ban gaya
            v[i] = 0;
        }
        else if (v[i] == 2 && v[i - 1] == 2)
        {
            ans++;
            // gym kar lia kal ab nahi karuga aur contest hai nahi
            v[i] = 0;
        }
        else
        {
            if (v[i - 1] == 1)
            {
                v[i] = 2;
            }
            else if (v[i - 1] == 2)
            {
                v[i] = 1;
            }
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}