#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define ret0 return 0;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in t;
    int p;
    in p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        int temp;
        in temp;
        s.insert(temp);
    }
    int q;
    in q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        in temp;
        s.insert(temp);
    }
    if (s.size() == t)
    {
        out "I become the guy." << endl;
    }
    else
    {
        out "Oh, my keyboard!" << endl;
    }
    ret0
}