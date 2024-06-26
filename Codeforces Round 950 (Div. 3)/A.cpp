#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int m,n;
    cin>>n>>m;
    string problems;
    cin>>problems;
    unordered_map<char,int>mp;
    for(auto it:problems)
    {
        mp[it]+=1;
    }
    int req=0;
    for(char c='A';c!='H';c++)
    {
        if(mp.find(c)==mp.end())
        {
            req+=m;
        }
        else
        {
            if(mp[c]-m<0)req+=m-mp[c];
        }
    }
    cout<<req<<endl;

}
    return 0;
}