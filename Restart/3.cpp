#include <bits/stdc++.h>
using namespace std;
int m[2010][2010] = {-1};
string a, b;
int n;
int k;
bool fun(int i, int j, int s)
{
    if (s < 0)
    {
        if (j < i)
            return 1;
        return 0;
    }
    bool ans = 0;
    if (a[s] == b[i])
        ans |= fun(i + 1, j, s - 1);
    if (a[s] == b[j])
        ans |= fun(i, j - 1, s - 1);
    return ans;
}
int main()
{
    int tc;
    cin >> tc;
    int ii = 1;
    while (tc--)
    {
        cin >> n;

        cin >> a >> b;

        cout << "Case " << ii++ << ": " << (fun(0, n - 1, n - 1) ? "YES" : "NO") << endl;
    }
}