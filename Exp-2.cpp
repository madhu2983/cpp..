//Program that allows the user to enter the information for three employees(i.e emp_id, house_no,name,area,city,state)and then enter the employee id to retrieve and display the information for the employee with the given id number.// 
#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int emp_id;
    int house_no;
    char name[10];
    char area[20];
    char city[20];
    char state[20];
};

int main()
{
     int n;
    cout<<"Enter the number of employee you want to enter";
    cin>>n;
    employee emp[n];
    for(int i=0;i<n;i++)
    {
    
    cout<<"Enter the employee id no."<<endl;
    cin>>emp[i].emp_id;
    cout<< "Enter the house no"<<endl;
    cin>>emp[i].house_no;
    cout<< "Enter the name of the employee"<<endl;
    cin>>emp[i].name;
    cout<< "Enter the name of the area"<<endl;
    cin>>emp[i].area;
    cout<< "Enter the name  of the city"<<endl;
    cin>>emp[i].city;
    cout<< "Enter the name of the state"<<endl;
    cin>>emp[i].state;
    }
    for (int i=0; i<n; i++)
    {
    cout<<"Enter the employee id no."<<emp[i].emp_id <<endl;
    cout<<"House no of the employee"<<emp[i].house_no <<endl;
    cout<<"Enter the name of the employee"<<emp[i].name <<endl;
    cout<<"Area of the employee"<<emp[i].area <<endl; 
    cout<<"Name of the city" <<emp[i].city <<endl;
    cout<<"Name of the state" <<emp[i].state <<endl;
    }
    return 0;
    }
    
