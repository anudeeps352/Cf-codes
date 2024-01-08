#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        float mid=(a+b)/(float)2;
        float diff=abs(b-mid);
        cout<<ceil(diff/(float)c)<<endl;
    }
    return 0;
}