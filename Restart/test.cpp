#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 5, 5};
    map<int, int> mp;
    for (auto &it : v)
    {
        mp[it]++;
    }
    unique(v.begin(), v.end());
    v.resize(mp.size());
    for (auto &it : v)
    {
        cout << it << " ";
    }
    return 0;
}