#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for (int i = 0; ; i++)
    {
        if (i*a> c)
        {
            break;
        }
        for (int j = 0; ; j++)
        {
            int damage= (i*a)+(j*b);
            if (damage==c)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
            if(damage>c)
            {
                break;
            }
        }
        
    }
    cout<<"No"<<endl;
    return 0;
}