#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    do {
            cout << n % 10 << " ";
            n = n / 10;
        } 
    while (n != 0);
    cout << endl;
    
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