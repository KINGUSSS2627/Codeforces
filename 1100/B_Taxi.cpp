#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int A[t];
    int c_4 = 0, c_1 = 0, c_2 = 0, c_3 = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
            c_1++;
        else if (A[i] == 2)
            c_2++;
        else if (A[i] == 3)
            c_3++;
        else
            c_4++;
    }
    int total = 0;
    total = c_4 + c_3 + c_2 / 2;
    c_1 -= c_3;
    if (c_2 % 2 == 1)
    {
        total += 1;
        c_1 -= 2;
    }
    if (c_1 > 0)
    {
        if (c_1 % 4 == 0)
        {
            total += c_1 / 4;
        }
        else
        {
            total += ((c_1 / 4) + 1);
        }
    }
    cout << total << endl;
    return 0;
}