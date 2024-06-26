#include<iostream>
#include<cmath>
using namespace std;
int digitdistance(int num1 ,int num2);
main()
{
    int a,b,c;
    cout<<"enter the  no 1 ";
    cin>>a;
    cout<<"enter the  no 2";
    cin>>b;
    c = digitdistance(a,b);
    cout<<c;

}
int digitdistance(int num1 ,int num2)
{
    int unit1=num1%10;
    int ten1 = (num1/10)%10;
    int hund1 =(num1/100)%10;
    int unit2=num2%10;
    int ten2=(num2/10)%10;
    int hund2=(num2/100)%10;
    int result =abs(unit1 - unit2)+abs(ten1 - ten2)+abs(hund1 - hund2);
    return result;
}

