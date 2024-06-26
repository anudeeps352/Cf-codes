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
    vector<int>found(n),original(n);
    for(int i=0;i<n;i++)
    {
        cin>>original[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>found[i];
    }
    int m;
    cin>>m;
    queue<int>q;
    for(int i=0;i<m;i++)
    {
        int inp;
        cin>>inp;
        q.push(inp);
    }
    int i=0;
    while(i!=n)
    {
        if(original[i]!=found[i])
        {
            while(!q.empty() && (q.front()!=found[i]))q.pop();
            if(q.empty())break;
            else q.pop();
        }
        i++;
    }
    if(i==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

    return 0;
}