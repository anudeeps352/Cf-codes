#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
  int sum=0;
  int mid = 5;
  int n =15;
    for(int i=1;i*mid<=n;i++)
    {
        sum+=i*mid;
    }
    cout<<sum;

    return 0;
}