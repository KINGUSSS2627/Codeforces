//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i{}; i < n; i++)
        cin >> a[i];

    // Total Subarray Count
    int ans{n * (n + 1) / 2};

    map<int, int> freq;

    // Pr holds the number of Subarray removed which ends at index i
    vector<int> pr(n + 1, 0);

    for (int i{}; i < n; i++)
    {
        if (freq[a[i]] != 0)
        {
            // Jab maine kisi element ko udaya to usse banne wale subArray nahi lunga mai
            ans -= n - i;

            // Ispar end hone wala saare subarrays ko count karne ke lia jo pref sum lena hai usko mark kar denge
            pr[i]++;
        }
        freq[a[i]]++;
    }

    // for (auto &it : pr)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    for (int i{1}; i < n; i++)
    {
        pr[i] += pr[i - 1];
    }

    // for (auto &it : pr)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    freq.clear();
    for (int i{n - 1}; i >= 0; i--)
    {
        if (freq[a[i]] != 0)
        {
            // Jaise forward pass se hataye hai waise hi backward pass se hata denge par duplicate erase ho jaayneg isse unhe bachane ke lia pr[i] add karna padega
            ans -= i + 1;
            ans += pr[i];
        }
        freq[a[i]]++;
    }

    cout << ans << endl;
}
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}