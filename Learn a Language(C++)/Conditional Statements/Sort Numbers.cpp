#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int numbers[]= {a,b,c};
    sort(numbers, numbers+3);
 
    for(int i=0; i<3; i++)
    {
        cout<<numbers[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}

int main()
{
    solve();
    return 0;
    
}