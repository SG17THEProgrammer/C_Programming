


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,x;
cin>>t;
while(t--)
{
    cin>>x;
    cout<<__builtin_popcount(x)<<endl;
}
return 0;
}
