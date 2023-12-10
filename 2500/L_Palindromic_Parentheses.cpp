//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    // Ek jaise saare to honge hi subsequence palindrome aur balance honeke lia ( => n/2 honge aur ) =>n /2
    // :. k < n / 2 not possible

    // agar k = n hua to agar palindrome banaya to wo balance nahi ho skata
    if (k < n / 2 || k == n)
    {
        cout << -1 << endl;
    }
    else
    {
        string ans = "";
        for (int i = 0; i < n / 2; i++)
        {
            ans += '(';
        }
        for (int i = 0; i < n / 2; i++)
        {
            ans += ')';
        }
        int i = 0, j = n / 2;
        bool f = 0;
        string pref = "", suff = "";
        k -= (n + 1) / 2;
        while (k--)
        {
            if (f)
            {
                ans[i] = '$';
                ans[j] = '$';
                i++;
                j++;
                pref += "()";
            }
            else
            {
                ans[i] = '$';
                ans[j] = '$';
                i++;
                j++;
                suff += "()";
            }
            f = !f;
        }

        string res = "";
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] != '$')
            {
                res += ans[i];
            }
        }

        res = pref + res;
        res = res + suff;
        cout << res << endl;
    }
}
int32_t main()
{
    solve();
    return 0;
}