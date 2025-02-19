#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int size_a,size_b;
    cin>>size_a>>size_b;
    vector<int>a(size_a);
    vector<int>b(size_b);
    for(int i=0;i<size_a;i++)cin>>a[i];
    for(int i=0;i<size_b;i++)cin>>b[i];

    
    int res = 1;
    
    for(int i=0;i<size_a;i++)
    {
        int temp=INT_MAX;
        for(auto it:b)
        {
            temp=min(temp,it-a[i]);
        }
        a[i]=min(a[i],temp);
    }
    for(int i=0;i<size_a-1;i++)
    {
        if(a[i]>a[i+1])
        {
            res=0;
            break;
        }    
    }
    if(res)cout<<"YES\n";
    else cout<<"NO\n";
}
    return 0;
}