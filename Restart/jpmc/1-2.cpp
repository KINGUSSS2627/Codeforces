#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& v){
    multiset<int> st;
    for(auto &it : v)
    {
        st.insert(it);
    }

    int ans = 0;
    while(st.size() >= 2)
    {
        auto it = st.begin();
        int val1 = *it;
        st.erase(it);

        it = st.begin();
        int val2 = *it;
        st.erase(it);

        st.insert(val1 + val2);
        ans += val1 + val2;
    }
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
     
    vector<int> v(n);
    for(auto &it : v)
    {
        cin >> it;
    }
    solve(v);
}