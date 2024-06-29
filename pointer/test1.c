#include<iostream>
using namespace std;


int main(){
    int a = 10,*b,**c;
    b=&a;
    c=&b;

    cout<<a<<endl;
    cout<<*(&a)<<endl;
    cout<<*(b)<<endl;
    cout<<**c<<endl;
    
    cout<<"Address..."<<endl;
    // cout<<"Address of a :"<<b<<endl;
    // cout<<*(&b)<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Address of a:"<<*c<<endl;
    cout<<"Address of a :"<<b<<endl;
    cout<<"Address of a :"<<*c<<endl;
    cout<<"Address of b :"<<&b<<endl;
    cout<<"Address of b :"<<c<<endl;
    cout<<"Address of c :"<<&c<<endl;


return 0;
}
