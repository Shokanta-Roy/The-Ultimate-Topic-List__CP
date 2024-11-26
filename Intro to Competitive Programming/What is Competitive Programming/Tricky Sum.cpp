#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long s=(long long) (n+1)*n/2;
        long long sum_of_power_2= 0;
        for (int i = 1; i <= n; i *=2)
        {
            sum_of_power_2 +=i;
        }
        long long p = s - 2 * sum_of_power_2;
        cout<<p<<endl;
        
    }
    return 0;
}