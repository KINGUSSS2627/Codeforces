//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

int numf(vector<int> &s, int i, int j)
{
    int num = 0;

    for (int k = i; k <= j; k++)
    {
        num = num * 10 + s[k];
    }
    return num;
}

int val(vector<int> &s, vector<char> &ops)
{
    vector<int> nums;

    vector<int> ind;
    ind.push_back(0);
    for (int i = 0; i < ops.size(); i++)
    {
        if (ops[i] == '+' || ops[i] == '*')
        {
            ind.push_back(i);
        }
    }

    for (int i = 1; i < ind.size(); i++)
    {
        int nn = numf(s, ind[i - 1], ind[i]);
        nums.push_back(nn);
    }

    int ans = nums[0];

    for (int i = 1; i < ind.size(); i++)
    {
        if (ops[i - 1] == '+')
        {
            ans += nums[i];
        }
        else if (ops[i - 1] == '*')
        {
            ans *= nums[i];
        }
    }
    return ans;
}
void rec(int i, vector<int> &s, vector<char> &ops, int &ans)
{
    if (i == s.size() - 1)
    {
        ans = min(ans, val(s, ops));
    }

    ops[i - 1] = '+';
    rec(i + 1, s, ops, ans);

    ops[i - 1] = '*';
    rec(i + 1, s, ops, ans);
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> ops(n - 1);
    int ans = INT_MAX;

    vector<int> v;
    for (auto &it : s)
    {
        v.push_back(it - '0');
    }

    rec(0, v, ops, ans);

    cout << ans << endl;
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