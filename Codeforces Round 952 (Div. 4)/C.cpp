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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    vector<long long>psum(n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        psum[i]=sum+arr[i];
        sum=psum[i];
    }
    int r=0;
    int count=0;
    unordered_map<long long,long long>mp;
    while(r<n)
    {
        mp[arr[r]]+=1;
        if(!(psum[r]%2) && mp.find(psum[r]/2)!=mp.end())
        {
            count++;
        } 
        r++;
    }
    cout<<count<<endl;
}
    return 0;
}