#include<iostream>
using namespace std;

class base
{
public:
    void fun1()
    {
        cout<<"fun1 of base"<<endl;
    }
};

class derived:public base
{
public:
    void fun2()
    {
        cout<<"fun2 of base"<<endl;
    }
};
int main()
{
    derived d;
    base *ptr;
    ptr=&d;
    ptr->fun1();
   // ptr->fun2();
}
