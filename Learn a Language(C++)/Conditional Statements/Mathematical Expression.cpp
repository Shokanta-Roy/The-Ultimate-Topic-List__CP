#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    char ch,ee;
    cin>>a>>ch>>b>>ee>>c;
    if(ch=='+')
    {
        if((a+b)==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }
    else if(ch=='-')
    {
        if((a-b)==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b<<endl;
        }
    }
    else if(ch=='*')
    {
        if((a*b)==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a*b<<endl;
        }
    }
}

int main()
{
    solve();
    return 0;
    
}