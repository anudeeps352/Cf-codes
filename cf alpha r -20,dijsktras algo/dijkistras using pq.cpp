#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>>adj[n+1];
    while(m)
    {   vector<ll>res1,res2;
        ll node,adjnode,wt;
        cin>>node>>adjnode>>wt;
        res1.push_back(wt);
        res1.push_back(adjnode);
        adj[node].push_back(res1);
        res2.push_back(wt);
        res2.push_back(node);
        adj[adjnode].push_back(res2);
        m--;
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    vector<ll>res;
    vector<ll>par(n+1);
    vector<ll>dis(n+1,LLONG_MAX);
    for(ll i=1;i<=n;i++)
        {
            par[i]=i;
        }    
    dis[1]=0;
    pq.push({0,1});
    while(!pq.empty())
    {
        ll node=pq.top().second;
        ll dst=pq.top().first;
        pq.pop();
        for(auto it:adj[node])
        {
            ll adjnode=it[1];
            ll adjdst=it[0];
            
            if(dst+adjdst<dis[adjnode])
            {
                    dis[adjnode]=dst+adjdst;
                    pq.push({dis[adjnode],adjnode});
                    par[adjnode]=node;
            }
            
        }
    }

    if(dis[n]==LLONG_MAX) 
    {
        cout<<-1;
        return 0;
    }    
    ll node=n;
    while(par[node]!=node)
    {
        res.push_back(node);
        node=par[node];
    }
    res.push_back(1);
    reverse(res.begin(),res.end());
    for(auto it:res)
    {
        cout<<it<<" ";
    }
    return 0;
}