#include<bits/stdc++.h>
using namespace std;

void solve()
{
    double n;
    cin>>n;
    if(floor(n)==n)
    {
        cout<<"int "<<static_cast<int>(n)<<endl;
    }
    else
    {
        int i_part= static_cast<int>(n);
        double d_part= n - i_part;
        cout<<"float "<< i_part<<" "<<fixed <<setprecision(5)<< d_part<<endl;
    }
}

int main()
{
    solve();
    return 0;
    
}