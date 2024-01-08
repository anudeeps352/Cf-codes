#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> arr(10,1);
    arr[a]--;
    arr[b]--;
    arr[c]--;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==0)cout<<i<<"\n";
    }
}
    return 0;
}