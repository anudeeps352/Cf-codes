#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int gap = abs(a-b);
    if(gap%2 == 0)cout<<"YES\n";
    else cout<<"NO\n";
}
    return 0;
}