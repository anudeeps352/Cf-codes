#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    string inp;
    cin>>inp;
    // p->q;
    // w->w;
    // q->p;
    reverse(inp.begin(),inp.end());
    string res="";
    for(auto it:inp)
    {
        if(it=='p')res.push_back('q');
        else if(it=='q')res.push_back('p');
        else res.push_back('w');
        
    }
    cout<<res<<"\n";
}
    return 0;
}