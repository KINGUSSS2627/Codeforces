// #include <bits/stdc++.h>
// #define int long long int
// #define tc while (t--)
// #define in cin >>
// #define out cout <<
// #define ret0 return 0;
// using namespace std;
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     in t;
//     tc
//     {
//         int n;
//         in n;
//         vector<int> v(n);
//         for (auto &it : v)
//         {
//             in it;
//         }
//         int maxx = *max_element(v.begin(), v.end());
//         int B[maxx + 1] = {0}, flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             B[v[i]]++;
//         }
//         for (int i = 0; i < maxx + 1; i++)
//         {
//             if (B[i] > 2)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             out "NO" << endl;
//         }
//         else
//         {
//             int A[n], B[n];
//         }
//     }
//     ret0
// }
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
        int n;
        in n;
        int A[n];
        int a[n + 1];
        int b[n + 1];
        int p1[n];
        int p2[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            in A[i];
            a[i + 1] = -1;
            b[i + 1] = -1;
            p1[i] = 0;
            p2[i] = 0;
        }
        set<int> s1, s2;
        for (int i = 0; i < n; i++)
        {
            if (a[A[i]] == -1)
            {
                a[A[i]] = i;
                p1[i] = A[i];
            }
            else if (b[A[i]] == -1)
            {
                b[A[i]] = i;
                p2[i] = A[i];
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            out "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i + 1] == -1)
            {
                s1.insert(i + 1);
            }
            if (b[i + 1] == -1)
            {
                s2.insert(i + 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (p1[i] == 0)
            {
                auto j = s1.upper_bound(p2[i]);
                if (j == s1.begin())
                {
                    flag = 1;
                    break;
                }
                else
                {
                    j--;
                    p1[i] == *j;
                    s1.erase(j);
                }
            }
            else
            {
                auto j = s2.upper_bound(p1[i]);
                if (j == s2.begin())
                {
                    flag = 1;
                    break;
                }
                else
                {
                    j--;
                    p2[i] == *j;
                    s2.erase(j);
                }
            }
        }
        if (flag == 1)
        {
            out "NO" << endl;
            continue;
        }
        out "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            out p1[i] << " ";
        }
        out endl;
        for (int i = 0; i < n; i++)
        {
            out p2[i] << " ";
        }
        out endl;
    }
    ret0
}