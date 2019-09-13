#include <iostream>
#include <stdlib.h>
using namespace std;

class Time{
protected:
    unsigned int hour,minute,second;
public:
    Time():hour(),minute(),second()
    {}
    void gettime()
    {
        cout<<"Enter hour:";cin>>hour;
        cout<<"\nEnter minutes:";cin>>minute;
        cout<<"\nEnter seconds:";cin>>second;
        cout<<endl;
    }
    void display()
    {
        cout<<hour<<"\:"<<minute;
        cout<<endl;
    }
    Time subt(Time,Time);
};

Time Time::subt(Time t2,Time t3)
{
    second=t2.second-t3.second;
    minute=0;
    if(second>60)
    {
        second-=60;
        minute--;
    }
    minute=t2.minute-t3.minute;
    hour=0;
    if(minute>=60)
    {
        minute-=60;
        hour--;
    }
    hour=t2.hour-t3.hour;
}

class Info:public Time
{
protected:
    char Name[100];
    char Id[50];
    char type[20];
public:
    void getinfo()
    {
        cout<<"\nEnter name:"; cin>>Name;
        cout<<"\nEnter ID:"; cin>>Id;
        cout<<"\nEnter type:"; cin>>type;
        cout<<endl;
    }

    void display()
    {
        cout<<Name<<endl;
        cout<<Id<<endl;
        cout<<type<<endl;
    }
};


int main()
{
    Info t;
    Time t1,t2,t3;
    t.getinfo();
    cout<<"Entering time:"<<endl;
    t1.gettime();
    cout<<"Exit time:"<<endl;
    t2.gettime();
    cout<<"\nInfo:"<<endl;
    t.display();
    t1.display();
    t2.display();
    cout<<"\nDuration time:"<<endl;
    t3.subt(t2,t1);
    t3.display();
    return 0;
}
