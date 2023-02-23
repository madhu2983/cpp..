//program to process the students data (i.e name , rollno,dob,branch,marks) using structure//
#include<iostream>
#include<string>
using namespace std;

struct student
{
    char name[20];
    int rollno;
    int d,m,y;
    char branch[30];
    float marks;
};

int main()
{
    int n;
    cout<< "Enter the number of students you want to enter";
    cin>>n;
    student s[n];
    for (int i=0; i<n; i++)
    {
    cout<< "Enter the name of the student :" << endl;
    cin>>s[i].name;
    cout<< "Enter the roll no  of the student :" << endl;
    cin>>s[i].rollno;
    cout<< "Enter the date of birth :" << endl;
    cin>>s[i].d >> s[i].m >> s[i].y;
    cout<< "Enter the name of the branch : " << endl;
    cin>>s[i].branch;
    cout<< "Enter the marks of the students :" << endl;
    cin>>s[i].marks;
    }
    for (int i=0; i<n; i++)
    {
    cout<<"Name of the student : " << s[i].name << endl;
    cout<<"Roll no. of the student : " << s[i].rollno << endl;
    cout<<"Date of birth : " << s[i].d << "-" << s[i].m << "-" << s[i].y <<endl;
    cout<<"Name of the branch : " << s[i].branch << endl; 
    cout<<"Marks of the student : " << s[i].marks << endl;
    }
    return 0;
};