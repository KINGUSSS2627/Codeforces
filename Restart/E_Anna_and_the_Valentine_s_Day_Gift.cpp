//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    priority_queue<pair<int, int>> pq;
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = v[i], ans = 0, cnt = 0;
        while (temp % 10 == 0)
        {
            ans++;
            temp /= 10;
        }
        temp = v[i];
        while (temp)
        {
            cnt++;
            temp /= 10;
        }
        pq.push({ans, cnt});
    }

    int turn = 0;
    while (!pq.empty())
    {
        if (turn == 0)
        {
            int zero = pq.top().first;
            int number = pq.top().second;
            pq.pop();
            pq.push({0, number - zero});
        }
        else
        {
            if (pq.size() < 2)
            {
                break;
            }
            else
            {
                int fir = pq.top().first;
                int terms1 = pq.top().second;
                pq.pop();

                int sec = pq.top().first;
                int terms2 = pq.top().second;
                pq.pop();

                int mini = min(fir, sec);
                pq.push({mini, terms1 + terms2});
            }
        }

        turn = !turn;
    }

    if (pq.top().second <= m)
    {
        cout << "Anna" << endl;
    }
    else
    {
        cout << "Sasha" << endl;
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