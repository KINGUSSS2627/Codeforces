#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<char>> v(10, vector<char>(10, '.'));
    for (auto &it : v)
    {
        for (auto &i : it)
        {
            cin >> i;
        }
    }

    int scr = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (v[i][j] == 'X')
            {
                int x = i, y = j;
                if (x >= 5)
                {
                    x = 9 - x;
                }
                if (y >= 5)
                {
                    y = 9 - y;
                }

                if (x <= y)
                {
                    scr += x + 1;
                }
                else
                {
                    scr += y + 1;
                }
            }
        }
    }
    cout << scr << endl;

    map<int, int> mp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (v[i][j] == 'X')
            {
                mp[min(i, j)]++;
            }
        }
    }

    // for (auto &it : mp)
    // {
    //     if (it.first == 0 || it.first == 9)
    //     {
    //         scr += 1;
    //     }
    //     else if (it.first == 1 || it.first == 8)
    //     {
    //         scr += 2;
    //     }
    //     else if (it.first == 2 || it.first == 7)
    //     {
    //         scr += 3;
    //     }
    //     else if (it.first == 3 || it.first == 6)
    //     {
    //         scr += 4;
    //     }
    //     else
    //     {
    //         scr += 5;
    //     }
    // }
    // cout << scr << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}