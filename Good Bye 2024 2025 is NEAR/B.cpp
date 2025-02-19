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
    vector<vector<int>>imp(n,vector<int>(2));
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>imp[i][0]>>imp[i][1];
        mp[imp[i][0]]+=1;
        mp[imp[i][1]]+=1;
    }
    string res="";
    for(int i=0;i<n;i++)
    {
        bool flagval=false;
        for(int j=imp[i][0];j<=imp[i][1];j++)
        {
            if(mp[j]-1<=0)
            {
                flagval=true;
                res+='1';
            }
            break;
        }
        if(!flagval)res+='0';
        
    }
    cout<<res<<"\n";
}
    return 0;
}