#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
using namespace std;
int val(string &ranomNumber)
{
    int value = 0;
    int maxValue = 0;

    for (int i = ranomNumber.length() - 1; i >= 0; i--)
    {
        int currVal = 0;

        switch (ranomNumber[i])
        {
        case 'A':
            currVal = 1;
            break;
        case 'B':
            currVal = 10;
            break;
        case 'C':
            currVal = 100;
            break;
        case 'D':
            currVal = 1000;
            break;
        case 'E':
            currVal = 10000;
            break;
        }

        if (currVal < maxValue)
            currVal *= -1;

        maxValue = max(maxValue, currVal);
        value += currVal;
    }

    return value;
}
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    // A is 1, B is 10, C is 100, D is 1000, E is 10000
    vector<char> p = {'A', 'B', 'C', 'D', 'E'};
    vector<int> v = {1, 10, 100, 1000, 10000};
    int maxx = -INT_MAX;
    int value = val(s);
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
        }
    }
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