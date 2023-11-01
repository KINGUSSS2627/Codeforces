#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> ans;

    int i = 0, j = n - 1, cnt = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            i++, j--;
        }
        else if (s[i] == '1')
        {
            n += 2;
            s = s.substr(0, i) + "01" + s.substr(i);
            ans.push_back(i);
            i++, j++;
            cnt++;
        }
        else
        {
            n += 2;
            s = s.substr(0, j + 1) + "01" + s.substr(j + 1);
            ans.push_back(j + 1);
            i++, j++;
            cnt++;
        }

        if (cnt > 300)
        {
            break;
        }
    }

    if (i >= j && cnt <= 300 && n % 2 == 0)
    {
        cout << ans.size() << endl;
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
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