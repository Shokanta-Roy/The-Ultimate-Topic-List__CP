#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(char c: s)
    {
        if(c=='\\')
            break;

        cout<<c;
    }

    return 0;
}