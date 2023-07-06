#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{

    public:
            int data;
            node *link;

            node (int n)
            {
                this->data=n;
                this->link=NULL;
            }


};

class Stack{

    public:
            node *top;

            Stack()
            {
                top=NULL;
            }

            void push(int data)
            {
                node *temp=new node(data);
                if(!temp)
                {
                    cout<<"overflow";
                    exit(1);
                }
                temp->link=top;
                top=temp;
            }

            bool isempty()
            {
                return top==NULL;
            }
            int front()
            {
                if(!isempty())
                {
                    return top->data;
                }
                else{
                    exit(1);
                }
            }

            void pop()
            {
                if(top==NULL)
                {
                    cout<<"underflow";
                    exit(1);
                }
                else
                {
                    node *temp=top;
                    top=top->link;
                    free(temp);
                }
            }

            void display()
            {
                node *temp;
                if(top==NULL)
                {
                    cout<<"underflow";
                }
                else
                {
                    temp=top;
                    while(temp!=NULL)
                    {
                        cout<<temp->data;
                        temp=temp->link;
                        if(temp!=NULL)
                        {
                            cout<<"->";
                        }
                    }
                }
            }
};
int main()
{

    Stack s;
    

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.display();

    cout<<"\ntop element is:"<<s.front()<<endl;

    s.pop();
    s.pop();

    s.display();

    cout<<"\ntop element is:"<<s.front()<<endl;

    return 0;
}