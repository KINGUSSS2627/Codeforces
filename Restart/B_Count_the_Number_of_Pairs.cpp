#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
        int n, k;
        cin >> n >> k;
        int cap[26] = {0};
        int small[26] = {0};
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small[s[i] - 'a']++;
            }
            else
            {
                cap[s[i] - 'A']++;
            }
        }
        int ans = 0, diff = 0;
        for (int i = 0; i < 26; i++)
        {
            ans += min(small[i], cap[i]);
            diff += abs(small[i] - cap[i]) / 2;
        }
        ans += min(k, diff);
        cout << ans << endl;
    }
    return 0;
}