#include<iostream>
using namespace std;

struct emp
{
    int emp_id;
    char name[50];
    float salary;
};
int main()
{
    emp e;
    int n,i;
    cout<<"Enter number of record's you want to enter : ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
      cout<<"Enter record no "<<i;
      cout<<"Enter name : ";
      cin>>e[i].name;
      cout<<"Enter employee id : ";
      cin>>e[i].emp_id;
      cout<<"Enter employee salary : ";
      cin>>e[i].salary;
    }
    system("cls");
    
    cout<<"Entered record :\n";
    for(i=0;i<n;i++)
    {
        cout<<"\nRecord no "<<i;
        cout<<"\nEmployee name : "<<e[i].name;
        cout<<"Employee id : "<<e[i].emp_id;
        cout<<"Employee salary : "<<e[i].salary;
        cout<<endl;
    }
    return 0;
}

