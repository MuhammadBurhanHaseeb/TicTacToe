#include <iostream>
using namespace std;
main()
{
  int num;
  int sum=0;
    for(int x = 1; x<=5; x=x+1){
        cout<<"enter number";
        cin>>num;
        sum = sum + num;
    }
    cout<<sum;
}