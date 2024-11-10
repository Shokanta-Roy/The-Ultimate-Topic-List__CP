#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int year=n/365;
    int month= (n%365)/30;
    int days= (n%365)%30;

    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days"<<endl;

}

int main()
{
    solve();
    return 0;
}