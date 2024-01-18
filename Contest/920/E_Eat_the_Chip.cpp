//                                        ॐ हनुमंते नमः
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int h, w, xa, ya, xb, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;

    if(xa >= xb)
    {
        cout<<"Draw"<<endl;
        return;
    }

    int d = xb - xa;
    
    if(d & 1)
    {
        int turn =1;
        while(xb > xa)
        {   
            if(turn)
            {
                if(yb < ya)
                {
                    ya--;
                }
                else if(ya < yb)
                {
                    ya++;
                }
                xa++;
            }
            else 
            {
                if(yb < ya && yb > 1)
                {
                    yb--;
                }
                else if(ya < yb && yb < w)
                {
                    yb++;
                }
                xb--;
            }

            if(ya == yb)
            {
                cout<<"Alice"<<endl;
                return;
            }
            turn = 1- turn;
        }
    }
    else
    {   
        int turn = 1;
        while(xb > xa)
        {   
            if(turn)
            {
                if(yb < ya && ya < w)
                {
                    ya++;
                }
                else if(ya < yb && ya > 1)
                {
                    ya--;
                }
                xa++;
            }
            else 
            {
                if(yb < ya)
                {
                    yb++;
                }
                else if(ya < yb)
                {
                    yb--;
                }
                xb--;
            }
            if(ya == yb)
            {
                cout<<"Bob"<<endl;
                return;
            }
            turn = 1 - turn;
        }
    }   
    cout<<"Draw"<<endl;
}
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}