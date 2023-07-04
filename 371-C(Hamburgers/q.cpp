/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll r;
    cin>>r;
    ll a=0,b=0,c=0;
    for(auto &ch:s)
    {
        if(ch=='B')a++;
        else if(ch=='S')b++;
             else c++;
    }
    ll low=0;
    ll high=r+100;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        ll z=0;
        ll r1=max(a*mid-nb,z);
        ll r2=max(b*mid-ns,z);
        ll r3=max(c*mid-nc,z);
        ll price=r1*pb+r2*ps+r3*pc;
        if(price<=r)low=mid+1;
        else high=mid-1;
    }
    cout<<high;

    return 0;
}