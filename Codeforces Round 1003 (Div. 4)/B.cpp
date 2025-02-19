#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int res = s.length();
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            res=1;
            break;
        }
    }
    cout<<res<<endl;
}
    return 0;
}