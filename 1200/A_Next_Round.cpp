#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, A + n, greater<int>());
    for (int i = k; i < n; i++)
    {
        if (A[i] == A[k - 1])
        {
            k++;
        }
    }
    int temp = k;
    for (int i = 0; i < temp; i++)
    {
        if (A[i] <= 0)
        {
            k--;
        }
    }
    cout << k << endl;
    return 0;
}