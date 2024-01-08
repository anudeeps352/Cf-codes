#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    ll sum=0;
    vector<int> buckets(n,0);
    for(auto &it:buckets)
    {
        cin>>it;
        sum+=it;
    }
    ll rootnum=sqrt(sum);
    if(sum==rootnum*rootnum)cout<<"YES"<<'\n';
    else cout<<"NO"<<"\n";

}
    return 0;
}