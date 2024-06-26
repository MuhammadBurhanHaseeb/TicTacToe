#include <iostream>
using namespace std;
main()
{
  string name;

  cout<<"enter name";
  cin>>name;

  while(name != "End"){
      cout<<"hello mr "<<name<<endl;
      cout<<"enter name";
      cin>>name;

  }
  cout<<"END";

}