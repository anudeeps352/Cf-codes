#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
int t;
cin>>t;
while(t--){
    vector<vector<char>> mat(3,vector<char>(3,'X'));
    int a,b=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='?')
            {
                a=i;
                b=j;
            }
        }
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        if(mat[a][i]!='?')
        {
            sum+=mat[a][i]-'A';
        }
    }
    int val=3-sum;
    val=int('A')+val;
    cout<<char(val)<<'\n';
}
    return 0;
}