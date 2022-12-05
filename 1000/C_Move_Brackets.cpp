#include <bits/stdc++.h>
#define int long long int
#define tc while (t--)
#define in cin >>
#define out cout <<
#define o  \
    int t; \
    cin >> t;
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
        int m;
        in m;
        char s[m];
        for (int i = 0; i < m; i++)
        {
            in s[i];
        }
        stack<char> st;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')' && (st.empty() || st.top() == ')'))
            {
                st.push(s[i]);
            }
            else if (s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
        }
        cout << st.size() / 2 << endl;
    }
    ret0
}