#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int length;
    cin>>length;
    string inp;
    cin>>inp;
    set<char>st;
    string temp="";
    for(auto it:inp){
        if(st.find(it)==st.end())
        {
            temp+=it;
            st.insert(it);
        }
    }
    sort(temp.begin(),temp.end());
    map<char,char>mp;
    int n=temp.size();
    for(int i=0;i<n;i++)
    {
        mp[temp[i]]=temp[(n-1)-(i%n)];
    }
    string res="";
    for(auto it:inp)
    {
        res+=mp[it];
    }
    cout<<res<<endl;
}
    return 0;
}