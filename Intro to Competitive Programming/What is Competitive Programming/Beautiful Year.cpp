#include<bits/stdc++.h>
using namespace std;

bool has_distinct_digits(int year)
{
    int d4= year%10;
    year=year/10;
    int d3= year%10;
    year=year/10;
    int d2= year%10;
    year=year/10;
    int d1= year%10;
    year=year/10;

    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
    {
        return true;
    }
    return false;
    
}
int main()
{
    int y;
    cin>>y;
    while (y++)
    {
        if (has_distinct_digits(y))
        {
            cout<<y<<endl;
            return 0;
        }
        
    }
    
    return 0;
}