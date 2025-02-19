#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;

int summer(vector<int>&a)
{
    int res=0;
    int prev=0;
    for(int i=0;i<a.size();i++)
    {
        prev+=a[i];
        res+=prev;
    }
    
    return res;
} 
int main()
{
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>inp(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>inp[i][j];
    }
    priority_queue<vector<int>>pq;
    for(int i=0;i<n;i++)
    {
        vector<int>temp(inp[i].begin(),inp[i].end());
        int sum = summer(temp);
        int ele_sum = accumulate(inp[i].begin(),inp[i].end(),0);
        pq.push({ele_sum,sum,i});

    }
    vector<int>final;
    while(!pq.empty())
    {
        auto top_element = pq.top();
        pq.pop();
        int index = top_element[2];
        final.insert(final.end(),inp[index].begin(),inp[index].end());
    }
    int res = summer(final);
    cout<<res<<"\n";



}
    return 0;
}