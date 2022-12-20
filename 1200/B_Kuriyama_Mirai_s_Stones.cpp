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
    int n;
    in n;
    vector<int> s1;
    vector<int> s2;
    vector<int> B;
    int sum1 = 0, sum = 0, temp;
    for (int i = 0; i < n; i++)
    {
        in temp;
        B.push_back(temp);
        sum1 += temp;
        s1.push_back(sum1);
    }
    sort(B.begin(), B.end());
    for (int i = 0; i < n; i++)
    {
        sum += B[i];
        s2.push_back(sum);
    }
    int t;
    in t;
    tc
    {
        int C[3];
        in C[0] >> C[1] >> C[2];
        if (C[0] == 1 && C[1] != 1)
        {
            out s1[C[2] - 1] - s1[C[1] - 2] << endl;
        }
        else if (C[0] == 1 && C[1] == 1)
        {
            out s1[C[2] - 1] << endl;
        }
        else if (C[0] == 2 && C[1] != 1)
        {
            out s2[C[2] - 1] - s2[C[1] - 2] << endl;
        }
        else
        {
            out s2[C[2] - 1] << endl;
        }
    }
    ret0
}