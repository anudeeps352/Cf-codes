#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&array,int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=high)
    {
        if(array[j]<array[i])
        {
            temp.push_back(array[j]);
            j++;
        }
        else 
        {
            temp.push_back(array[i]);
            i++;
        }

        
    }

    while(i<=mid)
        {
            temp.push_back(array[i]);
            i++;
        }
        while(j<=high)
        {
            temp.push_back(array[j]);
            j++;
        }

    for(int i=low;i<=high;i++)
    {
        array[i]=temp[i-low];
    }
}
void mergesort(vector<int>&array,int low,int high)
{
    if(low>=high) return;   
        int mid=(low+high)/2;
        mergesort(array,low,mid);
        mergesort(array,mid+1,high);
        merge(array,low,mid,high);
}
int main()
{
    cout<<"Enter array size :";
    vector<int>array;
    int k;
    cin>>k;
    while(k--)
    {
        int num;
        cin>>num;
        array.push_back(num);
    }
    int low=0;
    int high=array.size()-1;
    mergesort(array,low,high);
    cout<<"\narray is:";
    for(int i=0;i<=high;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}