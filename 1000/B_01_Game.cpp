//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int C[2] = {0};
    string S;
    cin >> S;
    for (int i{}; i < S.size(); i++)
    {
        C[S[i] - '0']++;
    }
    int X = min(C[0], C[1]);
    cout << (X % 2 ? "DA" : "NET") << endl;
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