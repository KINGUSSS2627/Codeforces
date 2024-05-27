#include <bits/stdc++.h>
using namespace std;

int solve(int ts1, int ts2, int p){
    
    int t1 = p / ts1;
    int t2 = p / ts2;

    int ans = INT_MAX;

    for(int i = 0; i <= t1; i++)
    {
        int left = p - i * ts1;
        if(left % ts2 != 0)
        {
            continue;
        }

        ans = min(ans, i + left/ ts2);
    }

    for(int i = 0; i <= t2; i++)
    {
        int left = p - i * ts2;
        if(left % ts1 != 0)
        {
            continue;
        }

        ans = min(ans, i + left/ ts1);
    }

    if(ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans  << endl;
    }
}

int main(){
    
    int ts1, ts2, p;
    cin >> ts1 >> ts2 >> p;
    solve(ts1, ts2, p);
}