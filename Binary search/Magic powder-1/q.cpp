#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    long long int n,k;
    cin>>n>>k;
    vector<long long int>req(n);
    vector<long long int>has(n);
    for(int i=0;i<n;i++)
    {
        cin>>req[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>has[i];
    }
    int low=0;
    int high=2000;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        long long int cost=0;
        long long int z=0;
        for(int i=0;i<n;i++)
        {
            cost+=max(req[i]*mid-has[i],z);
        }
        if(cost<=k)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<high<<endl; 
    
}