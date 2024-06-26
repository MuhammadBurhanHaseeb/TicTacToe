#include <iostream>
#include <windows.h> 
#include <conio.h>
#include <stdlib.h>
using namespace std;
char size[3][3] = {{' ',' ',' '},
                   {' ',' ',' '},
                   {' ',' ',' '} };

int index2=0;
bool Re = true;
string value;
int storevalue(char index);
int storevalueX(char index);
char seperate();
bool checkRows(char symbol);
bool checkcoloumn(char symbol);
bool checkDiagnol(char symbol);

main(){

   system("Color 0A");
    string n;
    system("CLS");
    cout<<" ------------------------------------------------------------"<<endl;
    cout<<"                        TIC TAC TOE                          "<<endl;
    cout<<" ------------------------------------------------------------"<<endl;
    cout<<"\n";
   cout<<"        _____________________________________________"<<endl;
  cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[0][0]<<"       |       "<<size[0][1]<<"          |    "<<size[0][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________"<<"|"<<endl;
    cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[1][0]<<"       |       "<<size[1][1]<<"          |    "<<size[1][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________"<<"|"<<endl;
    cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[2][0]<<"       |       "<<size[2][1]<<"          |    "<<size[2][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________|"<<endl;


    while(true){
    if(Re == false){
        break;
    }
    cout<<"\n";
    cout<<" Player 0's turn. "<<endl;
    cout<<" Enter Square. (e.g. A0) ";
    cin>>value;
    

   char a=  seperate();
   int r = storevalue(a);

    if( r == 2){
       continue;
   }
    system("CLS");
    system("Color 0A");

     cout<<" ------------------------------------------------------------"<<endl;
    cout<<"                        TIC TAC TOE                          "<<endl;
    cout<<" ------------------------------------------------------------"<<endl;
    cout<<"\n";
   cout<<"        _____________________________________________"<<endl;
  cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[0][0]<<"       |       "<<size[0][1]<<"          |    "<<size[0][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________"<<"|"<<endl;
    cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[1][0]<<"       |       "<<size[1][1]<<"          |    "<<size[1][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________"<<"|"<<endl;
    cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[2][0]<<"       |       "<<size[2][1]<<"          |    "<<size[2][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________|"<<endl;
    if(checkRows('O') || checkcoloumn('O') || checkDiagnol('O')){
            cout<<"\n";
            cout<< "*** WINNER IS 1ST PLAYER ***";

            getch();
            break;
    }
    else if(checkRows('X') || checkcoloumn('X') || checkDiagnol('X')){
             cout<<"\n";
            cout<<" *** WINNER IS 2ND PLAYER ***";
             
            getch();
            break;
    }
   while(true){
   cout<<"          "<<endl;
    
    cout<<" Player X's turn "<<endl;
    cout<<" Enter Square. (e.g. A0) ";
    
    cin>>value;
    char a=  seperate();
    int r = storevalueX(a);

    if( r == 2){
       continue;
   }
   system("CLS");

   system("Color 0A");
    cout<<" ------------------------------------------------------------"<<endl;
    cout<<"                        TIC TAC TOE                          "<<endl;
    cout<<" ------------------------------------------------------------"<<endl;
    cout<<"\n";
   cout<<"        _____________________________________________"<<endl;
  cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[0][0]<<"       |       "<<size[0][1]<<"          |    "<<size[0][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________"<<"|"<<endl;
    cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[1][0]<<"       |       "<<size[1][1]<<"          |    "<<size[1][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________"<<"|"<<endl;
    cout<<"       |              |                  |     "<<"      |"<<endl;
    cout<<"       |      "<<size[2][0]<<"       |       "<<size[2][1]<<"          |    "<<size[2][2]<<"      |"<<endl;
    cout<<"       |______________|__________________|___________|"<<endl;
    



    if(checkRows('O') || checkcoloumn('O') || checkDiagnol('O')){
            cout<<"\n";
            cout<<" *** WINNER IS 1ST PLAYER ***";
            
            getch();
            Re = false;
            break;
    }
    else if(checkRows('X') || checkcoloumn('X') || checkDiagnol('X')){
           cout<<"\n";
            cout<<" *** WINNER IS 2ND PLAYER ***";

            getch();
           Re = false;
            break;
    }
    else{
        break;
    }

    }
    }
}
char seperate(){
 char b;
    for(int i =0; value[i]!='\0';i++ ){
       
        b = value[i];
     
        index2 = value[i+1];
        
        index2 = index2 -48;
       
        break;
    }
    return b;

}
int storevalue(char index){
    if(index == 'c' && index2 == 1){

        if(size[1][2] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
         }
    else {
       size[1][2] = 'O';
    }
    
 }
    else if(index == 'c' && index2 == 0){
     if(size[0][2] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
            cout<<"\n";
             return 2;
         }

     else{
       size[0][2] = 'O';
       return 0;
     }
     }
    else if(index == 'c' && index2 == 2){
    if(size[2][2] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
        

    }
    else {
       size[2][2] = 'O';
       return 0;
     }
  }
     else if(index == 'b' && index2 == 0){
     if(size[0][1] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
             
         }
    else {
       size[0][1] = 'O';
       return 0;
     }
     }
     else if(index == 'b' && index2 == 1){
      if(size[1][1] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
             
         }
    else {
       size[1][1] = 'O';
       return 0;
     }
 }
     else if(index == 'b' && index2 == 2){
    if(size[2][1] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else {
       size[2][1] = 'O';
       return 0;
     }
}
      else if(index == 'a' && index2 == 0){
     if(size[0][0] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
         }
    else{
       size[0][0] = 'O';
        return 0;
     }
}
     else if(index == 'a' && index2 == 1){
    if(size[1][0] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
         }
    else {
       size[1][0] = 'O';
       return 0;
     }
}
     else if(index == 'a' && index2 == 2){
     if(size[2][0] == 'X'){
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n"; 
            return 2;
         }
    else {
       size[2][0] = 'O';
       return 0;
     }

}
else{
        cout<<" INVALID INPUT ."<<endl;
        getch();
        
    }
     return 0;

}
int storevalueX(char index){
    if(index == 'c' && index2 == 1){
     if(size[1][2] == 'O'){
             cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
             
         }
    else{
       size[1][2] = 'X';
        return 0;
    } 
     }
    else if(index == 'c' && index2 == 0){
    if(size[0][2] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
         }
    else{
       size[0][2] = 'X';
       return 0;
     }
    }
    else if(index == 'c' && index2 == 2){
    if(size[2][2] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else{
       size[2][2] = 'X';
        return 0;
    }
     }
     else if(index == 'b' && index2 == 0){
    if(size[0][1] == 'O'){
           cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else{
       size[0][1] = 'X';
        return 0;
    }
     }
     else if(index == 'b' && index2 == 1){
    if(size[1][1] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else{ 
       size[1][1] = 'X';
        return 0;
    }
     }
     else if(index == 'b' && index2 == 2){
    if(size[2][1] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
             return 2;
         }
   else{ 
       size[2][1] = 'X';
        return 0;
   }
     }
      else if(index == 'a' && index2 == 0){
    if(size[0][0] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else{
       size[0][0] = 'X';
        return 0;
    }
     }
     else if(index == 'a' && index2 == 1){
    if(size[1][0] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else {
       size[1][0] = 'X';
        return 0;
    }
     }
     else if(index == 'a' && index2 == 2){
    if(size[2][0] == 'O'){
            cout<<"\n";
             cout <<"  *** POSITION ALREADY ENTERED ***."<<endl;
             cout<<"\n";
            return 2;
         }
    else{
       size[2][0] = 'X';
        return 0;
    }
     }
    else{
        cout<<" INVALID INPUT ."<<endl;
         
        getch();
        
    }
  return 0;
}
bool checkRows(char symbol){
    int count =0;

    for(int i =0; i<3;i++){
        count =0;
        for(int j=0;j<3;j++){
            if(size[i][j] == symbol){
                count++;
            }
        }
    if(count == 3){
        return 1;
    }
    }
    return 0;
}
bool checkcoloumn(char symbol){
    int count =0;
    for(int i=0;i<3;i++){
        count =0;
        for(int j=0;j < 3; j++){
            if(size[j][i] == symbol){
    
                count++;
            }
        }
        if(count ==3){
            return 1;
        }
    }
    return 0;
}
bool checkDiagnol(char symbol){
  int count =0;

  for( int j=0; j<3; j++){
    if(size[j][j] == symbol ){
        count++;
    }
  }
  if(count ==3){
      return 1;
  }
  count =0;
for( int i =0,j =2; i<3; i++,j--){
    if(size[i][j] == symbol){
        count++;
    }
}
if(count == 3){
    return 1;
}
return 0;

}