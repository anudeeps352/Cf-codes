#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;

bool canDo(int n, vector<int>& a,vector<int>& b) {
    long long totalA = accumulate(a.begin(), a.end(), 0);  //4, -2
    long long totalB = accumulate(b.begin(), b.end(), 0);

    if (totalA < totalB) return false;

    priority_queue<ll>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(b[i]-a[i]);
    }
    ll top = pq.top();
    pq.pop();
    ll nextele = pq.top();
    
    
    if(top >0)
    {
        if(nextele>=0)return false;
        else 
        {
            if((top+nextele) >0)return false;
        }
    }
    return true;
}

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    if (canDo(n, a, b)) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    
}
    return 0;
}