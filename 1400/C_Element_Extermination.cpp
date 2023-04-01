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
    // select bigger then v[0] in least indx
    // delete all in btwn ad then delete that indx element
    // repeat this
    // If last element is smaller then 1st then its impossible to delete last pair
    // Rest all in middle can be deleted by selecting a bigger no and others then deleting bigger by a0 as soon as it become adjacent to it
    if (v[0] < v[n - 1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}