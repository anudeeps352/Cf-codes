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
    vector<pair<int,int>> inp(n);
    for(int i=0;i<n;i++)
    {
        cin>>inp[i].first;
        cin>>inp[i].second;
    }
    sort(inp.begin(),inp.end());
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(inp[i].first<inp[j].first && inp[i].second>inp[j].second)
            {
                count++;
            }
        }
    }
    cout<<count<<"\n";

}
    return 0;
}