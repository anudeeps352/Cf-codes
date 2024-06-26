#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    int singles,quads;
    cin>>singles>>quads;
    int res=0;
    res+=(quads%2==0)?(quads/2):(quads/2)+1;
    int leftsquares=(quads%2==0)?((res*15)-(res*8)):((res*15)-((res-1)*8+4));
    if(leftsquares>=singles)cout<<res<<endl;
    else {
        int remaining=singles-leftsquares;
        int extrareq=(remaining%15==0)?(remaining/15):(remaining/15)+1;
        cout<<res+extrareq<<endl;
    }
}
    return 0;
}