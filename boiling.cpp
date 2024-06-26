#include<iostream>
using namespace std;
int temp(int no , char a);
main()
{
    int no , boiling;
    char a;
    cout<<"enter the no ";
    cin>>no;
    cout<<"enter the the category";
    cin>>a;
    boiling=temp(no , a);
    cout<<"the water is boiling (0 for no)(1 for yes)"<<boiling;
}
int temp (int no , char a)
{
if ((no == 100 && a=='c') || (no == 212 && a=='f'))
{
int temp=1;
return temp;
}
else
{
int temp = 0;
return temp;
}
}