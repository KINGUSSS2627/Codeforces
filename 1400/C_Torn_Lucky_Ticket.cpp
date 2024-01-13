//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int summ(string &s)
{
    int ss{};
    for (auto &it : s)
    {
        ss += it - '0';
    }
    return ss;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);

    map<pair<int, int>, int> mp;

    for (auto &it : s)
    {
        cin >> it;

        int sum = summ(it);
        int lenIt = it.length();
        mp[{lenIt, sum}]++;
    }

    int ans{};

    for (int i = 0; i < n; i++)
    {
        int sum = summ(s[i]);
        int len = s[i].length();

        int f = (len & 1) ? 1 : 2;
        // Two equal halfs hai to even hai to 2 se warna 1 se start karna
        // j length maan lo added string ki length to agar odd hai to hm 1,3,5,7,9 .... add karenge
        // even ke case mai 2,4,6,8,10 ..... add karenge
        // niche wala loop yahi karega i.e joint effect of j and f

        for (int j = f; j < len; j += 2)
        {
            int netLen = len + j;
            int endAppend{}, startAppend{};
            // End append matlab agar end mai j length ki string jode, similarly start Append hai

            for (int k{}; k < netLen / 2; k++)
            {
                endAppend += s[i][k] - '0';
            }

            string temp = s[i];
            reverse(temp.begin(), temp.end());

            for (int k{}; k < netLen / 2; k++)
            {
                startAppend += temp[k] - '0';
            }

            ans += mp[{j, 2 * endAppend - sum}];
            ans += mp[{j, 2 * startAppend - sum}];
        }

        // Khudke jaise jitne hai wo sab ke saath bhi ho sakta nc1 se to n wo bhi
        ans += mp[{len, sum}];
    }
    cout << ans << endl;
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}