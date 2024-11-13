#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long temp=1;
    for(int i=1; i<=n; i++)
    {
        temp=temp*i;
    }
    cout<<temp<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}