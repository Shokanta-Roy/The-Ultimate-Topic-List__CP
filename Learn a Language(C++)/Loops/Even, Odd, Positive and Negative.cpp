#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int x;
    int e_count=0, o_count=0, n_count=0, p_count=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            e_count++;
        }
        else if (x%2 !=0)
        {
            o_count++;
        }
        if (x<0)
        {
            n_count++;
        }
        else if (x>0)
        {
            p_count++;
        }
    }
    cout<<"Even: "<<e_count<<endl;
    cout<<"Odd: "<<o_count<<endl;
    cout<<"Positive: "<<p_count<<endl;
    cout<<"Negative: "<<n_count<<endl;
}

int main()
{
    solve();
    return 0;
}