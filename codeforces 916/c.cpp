#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> A(n),B(n);
    for(auto &it:A)
    {
        cin>>it;
    }
    for(auto &it:B)
    {
        cin>>it;
    }
    int res=0,ans=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        if(i>=k)break;
        res+=A[i];
        mx=max(mx,B[i]);
        ans=max(ans,res+mx*(k-i-1));
    }
    cout<<ans<<"\n";
}
    return 0;
}