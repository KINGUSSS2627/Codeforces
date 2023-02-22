#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
int32_t main()
{
    int t;
    in t;
    tc
    {
        int x, y, z;
        in x >> y >> z;
        int x1, y1, x2, y2;
        in x1 >> y1 >> x2 >> y2;
        vector<int> v;
        v.push_back(x1 + x2 + abs(y1 - y2));
        v.push_back(x - x1 + x - x2 + abs(y1 - y2));
        v.push_back(y1 + y2 + abs(x1 - x2));
        v.push_back(y - y1 + y - y2 + abs(x1 - x2));
        v.push_back(x1 + y1 + x2 + y2);
        v.push_back(x1 + x2 + y - y1 + y - y2);
        v.push_back(y1 + y2 + x - x1 + x - x2);
        v.push_back(x - x1 + x - x2 + y - y1 + y - y2);
        int mini = *min_element(v.begin(), v.end());
        out mini + z << endl;
    }
    ret0
}
