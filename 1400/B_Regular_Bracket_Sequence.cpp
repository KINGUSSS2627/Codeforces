//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> st;

    int i{1};
    st.push(s[0]);

    while (i < s.length())
    {
        if (!st.empty()&&st.top() == '(' && s[i] ==')')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
        i++;
    }
    
    cout<<s.length() - st.size()<<endl;
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}