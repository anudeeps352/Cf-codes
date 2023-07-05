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
    {   
        vector<ll>res1,res2;
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
    set<pair<ll,ll>>pq;
    vector<ll>res;
    vector<ll>par(n+1);
    vector<ll>dis(n+1,LLONG_MAX);
    for(ll i=1;i<=n;i++)
        {
            par[i]=i;
        }    
    pq.insert({0,1});
    while(!pq.empty())
    {
        auto it=*(pq.begin());
        ll node=it.second;
        ll dst=it.first;
        pq.erase(it);
        for(auto itt:adj[node])
        {
            ll adjnode=itt[1];
            ll adjdst=itt[0];
            
            if(dst+adjdst<dis[adjnode])
            {
                if(dis[adjnode]!=LLONG_MAX)
                {
                    pq.erase({dis[adjnode],adjnode});
                }
                    dis[adjnode]=dst+adjdst;
                    pq.insert({dis[adjnode],adjnode});
                    par[adjnode]=node;
            }
            
        }
    }

    if(dis[n]==1e9) cout<<-1;;
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