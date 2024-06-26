#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;

int helper(int mid,int n)
{
    int sum=0;
    for(int i=1;i*mid<=n;i++)
    {
        sum+=i*mid;
    }
    return sum;
}
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int max_sum=INT_MIN;
    int x=n;
    for(int i=2;i<=n;i++)
    {
        int res=helper(i,n);
        if(res>max_sum)
        {
            x=i;
            max_sum=res;
        }
    }
    cout<<x<<endl;
}
    return 0;
}