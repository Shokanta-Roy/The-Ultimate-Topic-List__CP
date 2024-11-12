 #include<bits/stdc++.h>
 using namespace std;

 void solve()
 {
    char ch;
    cin>>ch;
    if(ch>='a' && ch<= 'z')
    {
        ch=ch-32;
    }
    else
    {
        ch=ch+32;
    }
    cout<<ch<<endl;
 }

 int main()
 {
    solve();
    return 0;
 }