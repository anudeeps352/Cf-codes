#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
            int top;
            int *arr;
            int size;
            Stack()
            {
                size=1000;
                top=-1;
                arr= new int[size];
            }

            void push(int val)
            {
                top++;
                arr[top]=val;
            }
            void pop()
            {
                if(top==-1) 
                {
                    cout<<"Nothing to delete";
                    return;
                }
                else
                {
                    top--;
                }
            }
            int Top()
            {
                return arr[top];
            }
            int Size()
            {
                return top+1;
            }
};
int main()
{
    Stack S;

    S.push(1);
    S.push(3);
    S.push(6);
    S.pop();
    cout<<"Top is :"<<S.Top()<<endl;
    return 0;
}