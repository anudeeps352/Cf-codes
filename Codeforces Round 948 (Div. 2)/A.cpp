#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int moves=0,height=0;
    cin>>moves>>height;
    if(moves<height)
    {
        cout<<"No"<<endl;
    }
    else
    {
        moves=moves-height;
        if(moves%2==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
    return 0;
}