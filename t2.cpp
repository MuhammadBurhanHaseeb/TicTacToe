#include<iostream>
using namespace std;
main()
{
   int n=3;
   cout<<(n/=2)<<endl;
   cout<<"e";
   /*  while(n>=0)
    {
        cout<<n*n;
        --n;
        cout<<"\n";
    }
    cout<< n <<endl;
     
     while(n<4)
     cout<< ++n <<endl;*/

     while(n>0)
     cout<<(n/=2) <<endl;

    // return 0;

}