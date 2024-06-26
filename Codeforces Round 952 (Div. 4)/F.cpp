#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    ll health,n;
    cin>>health>>n;
    vector<ll>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        health-=p[i];
    }
    vector<ll>c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    if(health<=0){
        cout<<1<<endl;
        continue;
    }
    ll low=0;
    ll ans;
    ll high=1e11;
    
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(mid/c[i])*p[i];

        }
        if(health-sum<=0)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<ans+1<<endl;
}
    return 0;
}