#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char ch;
    cin>>ch;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

int main()
{
    solve();
    return 0;
}