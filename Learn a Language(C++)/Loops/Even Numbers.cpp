#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    bool found=false;
    for (int i = 2; i <= n; i=i+2)
    {
        cout<<i<<endl;
        found=true;
    }
    if(!found)
    {
        cout<<"-1"<<endl;
    }
    
}

int main()
{
    solve();
    return 0;
}