#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
 ll n,k;
 cin>>n>>k;
 for(ll i=n-k;i>=1;--i)
 {
    cout<<i<<" ";
 }   
 for(ll i=n-k+1;i<=n;++i)
 {
    cout<<i<<" ";
 }
 cout<<"\n";
}
    return 0;
}