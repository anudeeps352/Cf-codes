#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class baseclass{
    public:
        virtual void printer()
        {
            cout<<"IM a base class"<<endl;
        }
};

class derivedclass : public baseclass{
    public:
    
        void printer()
        {
            cout<<"IM derived"<<endl;
        }
        void test()
        {
            cout<<"If its true that pointer doesnt need extra memory I'll be printed";
        }
    
};
int main()
{
    
    
    derivedclass d;
    baseclass *s=&d;
    s->printer();
    d.printer();
    // s.printer();
    // d.printer();
    return 0;
}