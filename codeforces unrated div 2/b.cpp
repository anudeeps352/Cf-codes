#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int k;
        cin>>k;
        int i=0;
        vector<int>health;
        while(i<n)
        {
            int temp;
            cin>>temp;
            health.push_back(temp);
            i++;
        }
        priority_queue<pair<int,int>>pq;
        for(i=0;i<n;i++)
        {
            pq.push({health[i],i+1});
        }
        vector<int>res;
        // while(!pq.empty())
        // {
        //     auto it=pq.top();
        //     pq.pop();
        //     int top_health=it.first;
        //     int index=it.second;
        //     top_health-=k;
        //     if(top_health<=0)res.push_back(index);
        //     else pq.push({top_health,index});
        // }
        // for(int j=0;j<res.size();j++)
        // {
        //     cout<<res[j]<<" ";
        // }
        // cout<<endl;
        
    }
    return 0;
}