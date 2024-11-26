#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum, product;
    cin>>sum>>product;
    int count=0;
    for (int a = 0; a <= sum; a++)
    {
        for (int b=0; b <= sum; b++)
        {
            for (int c=0; c <= sum; c++)
            {
                if (a+b+c <= sum)
                {
                    if (a*b*c <= product)
                    {
                        count++;
                    }
                    
                }
                
            }
            
        }
        
    }
    cout<<count<<endl;
    return 0;
}