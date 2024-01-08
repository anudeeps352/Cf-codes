#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>userseq(n);
        int i=1;
        for(int j=0;j<n;j++)
        {
            cin>>userseq[j];
        }
        for(int j=0;j<n;j++)
        {
            if(userseq[j]==i)
            {
                i++;
            }
            i++;
        }
        cout<<--i<<endl;
    }
    return 0;
}