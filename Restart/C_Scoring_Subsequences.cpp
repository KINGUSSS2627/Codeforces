#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }

        // Here we need to create min heap ans stl c++ give us max heap :. We need to create min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(v[i]);
            while (pq.top() < pq.size())
            {
                pq.pop();
            }
            cout << pq.size() << " ";
        }
        cout << endl;
    }
    return 0;
}