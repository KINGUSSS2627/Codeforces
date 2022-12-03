#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int A[n];
    int c_0 = 0, c_1 = 0, c_0_max = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
        {
            c_1 += 1;
            if (c_0 > 0)
            {
                c_0--;
            }
        }
        else
        {
            c_0++;
            if (c_0 > c_0_max)
                c_0_max = c_0;
        }
    }
    cout << c_0_max + c_1 << endl;
    return 0;
}