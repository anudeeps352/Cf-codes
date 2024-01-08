#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,c,h;
        cin>>b>>c>>h;
        int maxbread=c+h+1;
        if(b>=maxbread)
        {
            cout<<maxbread+c+h<<endl;
        }
        else
        {
            cout<<b+b-1<<endl;
        }
    }
    return 0;
}