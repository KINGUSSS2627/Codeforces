//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

char color(bool f)
{
    return f ? 'R' : 'B';
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int diff = k - (n + m - 2);
    if (n + m - 2 > k || diff & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        vector<vector<char>> hor(n, vector<char>(m - 1, 'B'));

        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < m-1; j +=2)
            {
                hor[i][j] = 'R'; 
            }
        }

        for(auto &it : hor)
        {
            for(auto &i : it)
            {
                cout<<i<<" ";
            }
            cout << endl;
        }


        vector<vector<char>> ver;
        if(m&1)
        {
            ver.resize(n-1, vector<char>(m, 'R'));
            for(int i = 1; i < n-1; i += 2)
            {
                ver[i][m-1] = 'B';
            }
        }
        else
        {
            ver.resize(n-1, vector<char>(m, 'B'));
            for(int i = 1; i < n-1; i += 2)
            {
                ver[i][m-1] = 'R';
            }
        }

        for(auto &it : ver)
        {
            for(auto &i : it)
            {
                cout<<i<<" ";
            }
            cout << endl;
        }
    }

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