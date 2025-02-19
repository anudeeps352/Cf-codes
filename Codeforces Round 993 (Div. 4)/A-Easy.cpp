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
    int count=0;
    for(int a=1;a<=n-1;a++)
    {
        int b = n-a;
        count++;
    }
    cout<<count<<"\n";
}
    return 0;
}