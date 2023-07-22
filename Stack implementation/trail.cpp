#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int i,int j,vector<int>&arr)
{
	if(i==j)return true;
	while(i<j)
	{
		if(arr[i]!=arr[i+1])return false;
	}
	return true;
}
int fun(int index,int j,vector<int>&arr,vector<vector<int>>&dp)
{
	if(index>arr.size()-1)return 0;
	int count=0;
	if(dp[index][j]!=-1)return dp[index][j];
	if(check(index,j,arr))count++;
	for(int k=index;k<j;k++)
	{
		count+=fun(index,k,arr,dp)+fun(k+1,j,arr,dp);
	}
	return dp[index][j]=count;
}
int main() {
	  //Reading input from STDIN
	
	
	vector<int>arr;
    int num;
    cin>>num;
    int size=num;
    while(num--)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    vector<vector<int>>dp(size,vector<int>(size,-1));
    cout<<0;
    return 1;
	num=fun(0,size-1,arr,dp);
	cout << "Input number is " << num << endl;
	return 1;
}