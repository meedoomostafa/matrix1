#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}
void Employee::setdata()
{
    cout<<" enter employee id : ";cin>>employeeid;
    cout<<" enter name : ";cin>>name;
    cout<<" enter email : ";cin>>email;
    cout<<" enter phone : ";cin>>phone;
    cout<<" enter jobtitle : ";cin>>jobtitle;
    b.setdepart();

}
void Employee::displaydata()
{
    cout<<"  employee id : "<<employeeid<<endl;
    cout<<"  name : "<<name<<endl;
    cout<<"  email : "<<email<<endl;
    cout<<"  phone : "<<phone<<endl;
    cout<<"  jobtitle : "<<jobtitle<<endl;
    b.displaydepart();
}


