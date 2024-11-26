#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=9)
    {
        cout<<"000"<<n<<endl;
    }
    else if(n<=99)
    {
        cout<<"00"<<n<<endl;
    }
    else if(n<=999)
    {
        cout<<"0"<<n<<endl;
    }
    else
    {
        cout<<n<<endl;
    }

    return 0;
}