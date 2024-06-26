#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int n,f,k;
    cin>>n>>f>>k;
    vector<int>cubes(n);
    for(int i=0;i<n;i++)
    {
        cin>>cubes[i];
    }
    int fav=cubes[f-1];
    sort(cubes.begin(),cubes.end(),greater<int>());
    unordered_set<int>list;
    for(int i=0;i<k;i++)
    {
        list.insert(cubes[i]);
    }
    if(list.find(fav)!=list.end())
    {
        if(find(cubes.begin()+k,cubes.end(),fav)==cubes.end())cout<<"YES"<<endl;
        else cout<<"MAYBE"<<endl;
    }
    else cout<<"NO"<<endl;
    
}
    return 0;
}