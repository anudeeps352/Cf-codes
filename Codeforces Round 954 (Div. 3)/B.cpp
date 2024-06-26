#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;

bool isstable(vector<vector<int>>&arr,int n,int m)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            vector<int>rows{0,-1,0,1};
            vector<int>cols{-1,0,1,0};
            for(int k=0;k<rows.size();k++)
            {
                int I=i+rows[k];
                int J=j+cols[k];
                if(I>=0 && J>=0 && I<n && J<m)
                {
                    if(arr[i][j]>arr[I][J])return false;
                }
            }
        }
    }
    return true;
}

bool elementstable(vector<vector<int>>&arr,int n,int m,int i,int j)
{
    vector<int>rows{0,-1,0,1};
            vector<int>cols{-1,0,1,0};
            for(int k=0;k<rows.size();k++)
            {
                int I=i+rows[k];
                int J=j+cols[k];
                if(I>=0 && J>=0 && I<n && J<m)
                {
                    if(arr[i][j]<=arr[I][J])return false;
                }
            }
            return true;
}
int main()
{
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    while(!isstable(arr,n,m))
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(elementstable(arr,n,m,i,j))
            {
                pq.push({i,j});
            }
        }
    }
        while(!pq.empty())
        {
        int i=pq.top().first;
        int j = pq.top().second;
        pq.pop();
        while(!elementstable(arr,n,m,i,j))
        {
            arr[i][j]-=1;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}

