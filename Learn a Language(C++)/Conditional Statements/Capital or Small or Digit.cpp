 #include<bits/stdc++.h>
 using namespace std;

 void solve()
 {
    char ch;
    cin>>ch;
    if(ch>='a' && ch<= 'z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(ch>='A' && ch<= 'Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(ch>='0' && ch<= '9')
    {
        cout<<"IS DIGIT"<<endl;
    }
 }

 int main()
 {
    solve();
    return 0;
 }