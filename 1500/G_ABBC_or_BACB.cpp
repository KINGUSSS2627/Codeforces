//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;

    int n = s.length();

    vector<int> posB;
    posB.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            posB.push_back(i);
        }
    }
    posB.push_back(n);

    int sum = 0, minn = INT_MAX;
    for (int i = 1; i < posB.size(); i++)
    {
        sum += posB[i] - posB[i - 1] - 1;
        minn = min(minn, posB[i] - posB[i - 1] - 1);
    }

    // 2 extra push kare to 1 seg add kara jo nahi kar skata to min wla hatao

    cout << sum - minn << endl;

    // for (auto &it : posB)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
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