#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int A, B, C;
    cin >> A >> B >> C;
    int minimum = A;
    if (B < minimum)
    {
        minimum = B;
    }
    if (C < minimum)
    {
        minimum = C;
    }
 
    int maximum = A;
    if (B > maximum)
    {
        maximum = B;
    }
    if (C > maximum)
    {
        maximum = C;
    }
 
    cout << minimum << " " << maximum << endl;
    
}

int main()
{
    solve();
    return 0;
    
}