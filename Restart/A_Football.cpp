// #include <bits/stdc++.h>
// #define int long long int
// #define tc while (t--)
// using namespace std;
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     string s, s1, s2;
//     map<string, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         if (i == 0)
//             s1 = s;
//         if (i != 0 && s != s1)
//             s2 = s;
//         else
//             s2 = "";
//         mp[s]++;
//     }
//     if (s2 == "")
//         cout << s1 << endl;
//     else if (mp[s1] > mp[s2])
//         cout << s1 << endl;
//     else
//         cout << s2 << endl;
//     return 0;
// }
// 4057616   Jul 13, 2013 7:20:24 AM	fuwutu	 43A - Football	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, goal(0);
    cin >> n;

    string team, win;
    while (n--)
    {
        if (goal != 0)
        {
            cin >> team;
            if (team == win)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            cin >> win;
            goal = 1;
        }
    }
    cout << win << endl;
    return 0;
}