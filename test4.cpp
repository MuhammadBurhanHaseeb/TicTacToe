#include <iostream>
using namespace std;
main()
{
  int num;
  int mult =0;
  cout<<"enter num";
  cin>>num;

  {
    for(int x=1; x <= num; x = mult-1)
    {
      mult = num * x;
    }
    cout<<mult;

  }

}