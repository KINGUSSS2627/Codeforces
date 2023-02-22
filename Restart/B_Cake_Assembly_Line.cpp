#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define ret0 return 0;
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
        int n, w, h;
        cin >> n >> w >> h;
        vector<int> a(n);
        vector<int> b(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        for (auto &it : b)
        {
            cin >> it;
        }
        vector<pair<int, int>> cake;
        vector<pair<int, int>> choco;
        for (int i = 0; i < n; i++)
        {
            cake.push_back({(a[i] - w), (a[i] + w)});
        }
        for (int i = 0; i < n; i++)
        {
            choco.push_back({(b[i] - h), (b[i] + h)});
        }
        vector<int> move_cake(n);
        for (int i = 0; i < n; i++)
        {
            move_cake[i] = cake[i].first - choco[i].first;
        }
        int max_move1 = *max_element(move_cake.begin(), move_cake.end());
        for (int i = 0; i < n; i++)
        {
            cake[i].first -= max_move1;
            cake[i].second -= max_move1;
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (choco[i].second > cake[i].second || choco[i].first < cake[i].first)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    ret0
}