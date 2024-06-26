#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int count = 0 ;
    int countt = 0 ;
    int counttt = 0 ;
    int array1[3][3] =  {{1,2,3}
                        ,{2,5,6}
                       ,{3,6,9}};
    int array2[3][3] ;
    for (int x=0 ; x<3 ; x++)
    {
     for (int y=0 ; y<3 ; y++)
     {
              array2[x][y] = array1[y][x];
     }   
    
    } 
     for (int x=0 ; x<3 ; x++)
    {
     for (int y=0 ; y<3 ; y++)
     {
         if (array2[0][y] == array1[x][y])
         {
             count ++;
             if(count == 3)
             {
                 cout<<"transpose is match "<<endl;
             }
         }
         if (array2[1][y] == array1[x][y])
         {
             countt ++;
             if(countt == 3)
             {
                 cout<<"transpose is match " <<endl;
             }
         }
         if (array2[2][y] == array1[x][y])
         {
             counttt ++;
             if(counttt == 3)
             {
                 cout<<"transpose is match"<<endl;
             }
         }
     }   
    
    } 
    if (count == 3 && countt == 3 && counttt == 3)
    {
        cout <<"all the transposes of rows and colun are matches"<<endl;
    }
   
}