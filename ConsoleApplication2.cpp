#include<iostream>
#include<cstdlib>

using namespace std;

class Base
{
public:
    virtual void myname()
    {
        cout << "This is class Base" << endl;
    }
};

class DerA : virtual public Base
{
public:
    void myname()
    {
        cout << "This is class DerA" << endl;
    }
};

class DerB : virtual public Base
{
public:
    void myname()
    {
        cout << "This is class DerB" << endl;
    }
};

class DerAB : public DerA, public DerB //ìíîæåñòâåííîå íàñëåäîâàíèå
{
public:
    void myname()
    {
        cout << "This is class DerAB" << endl;
    }
};


int main()
{
    Base obj_Base;
    DerA obj_DerA;
    DerB obj_DerB;
    DerAB obj_DerAB;

    obj_Base.myname();
    obj_DerA.myname();
    obj_DerB.myname();
    obj_DerAB.myname();

    cout << "---========---" << endl;

    Base* p[4];
    p[0] = new Base;
    p[0]->myname();
   

    p[1] = new DerA;
    p[1]->myname();
    

    p[2] = new DerB;
    p[2]->myname();
    

    p[3] = new DerAB;
    p[3]->myname();
   


    system("pause");
    return 0;
}