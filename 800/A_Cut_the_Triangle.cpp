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
    tc
    {
        set<int> s1;
        set<int> s2;
        int A[3], B[3];
        int t1, t2;
        for (int i = 0; i < 3; i++)
        {
            in A[i] >> B[i];
            s1.insert(A[i]);
            s2.insert(B[i]);
        }
        int flag = 1;
        for (int i = 0; i < 2; i++)
        {
            if (A[i] == A[i + 1])
            {
                if (B[i] == B[i + 1])
                    flag = 0;
            }
        }
        if (s1.size() == 1 || s2.size() == 1)
        {
            out "NO" << endl;
        }
        else if ((s2.size() == 3 || s1.size() == 3) && flag == 1)
        {
            out "YES" << endl;
        }
        else
        {
            out "NO" << endl;
        }
    }
    ret0
}