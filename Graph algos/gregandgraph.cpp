#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin>>v;
    vector<vector<int>>adj(v,vector<int>(v,0));
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>adj[i][j];
        }
    }
    vector<int>remove(v);
    for(int i=0;i<v;i++)
    {
        cin>>remove[i];
    }
    
    return 0;
}