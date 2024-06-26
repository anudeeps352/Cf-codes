#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int low=min(x,min(y,z));
    int high=max(x,max(y,z));
    int dist=INT_MAX;
    for(int i=low;i<=high;i++)
    {
        dist=min(dist,abs(x-i)+abs(y-i)+abs(z-i));
    }
    cout<<dist<<endl;
}
    return 0;
}