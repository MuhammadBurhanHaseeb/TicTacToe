#include <iostream>
using namespace std;
#include <conio.h>
char size[3][3] = {{' ',' ',' '},
                   {' ',' ',' '},
                   {' ',' ',' '} };
char index;
int index2=0;
string value;
void storevalue();
void storevalueX();
void seperate();
bool checkRows(char symbol);
bool checkcoloumn(char symbol);
bool checkDiagnol(char symbol);

main(){


    string n;

    while(true){

    cout<<" Player 0's turn. "<<endl;
    cout<<" Enter Square. (e.g. A0) ";
    cin>>value;

    seperate();
    storevalue();

    cout<<"        |     |     "<<endl;
    cout<<"    "<<size[0][0]<<"   | "<<size[0][1]<<"   |  "<<size[0][2]<<" "<<endl;
    cout<<"  ______|_____|_____"<<endl;
    cout<<"        |     |     "<<endl;
    cout<<"    "<<size[1][0]<<"   | "<<size[1][1]<<"   |  "<<size[1][2]<<" "<<endl;
    cout<<"  ______|_____|_____"<<endl;
    cout<<"        |     |     "<<endl;
    cout<<"    "<<size[2][0]<<"   | "<<size[2][1]<<"   |  "<<size[2][2]<<" "<<endl;
    cout<<"        |     |     "<<endl;

    if(checkRows('O') || checkcoloumn('O') || checkDiagnol('O')){
            cout<<" *** WINNER IS 1ST PLAYER ***";
            getch();
            break;
    }
    else if(checkRows('X') || checkcoloumn('X') || checkDiagnol('X')){
            cout<<" *** WINNER IS 2ND PLAYER ***";
            getch();
            break;
    }

   cout<<"          "<<endl;
    
    cout<<" Player X's turn "<<endl;
    cout<<" Enter Square. (e.g. A0) ";

    cin>>value;
    seperate();
    storevalueX();

    cout<<"        |     |     "<<endl;
    cout<<"    "<<size[0][0]<<"   | "<<size[0][1]<<"   |  "<<size[0][2]<<" "<<endl;
    cout<<"  ______|_____|_____"<<endl;
    cout<<"        |     |     "<<endl;
    cout<<"    "<<size[1][0]<<"   | "<<size[1][1]<<"   |  "<<size[1][2]<<" "<<endl;
    cout<<"  ______|_____|_____"<<endl;
    cout<<"        |     |     "<<endl;
    cout<<"    "<<size[2][0]<<"   | "<<size[2][1]<<"   |  "<<size[2][2]<<" "<<endl;
    cout<<"        |     |     "<<endl;

    if(checkRows('O') || checkcoloumn('O') || checkDiagnol('O')){
            cout<<" *** WINNER IS 1ST PLAYER ***";
            getch();
            break;
    }
    else if(checkRows('X') || checkcoloumn('X') || checkDiagnol('X')){
            cout<<" *** WINNER IS 2ND PLAYER ***";
            getch();
            break;
    }

    }
}
void seperate(){
    for(int i =0; value[i]!='\0';i++ ){
     
        index = value[i];
     
        index2 = value[i+1];
        
        index2 = index2 -48;
       
        break;
    }

}
void storevalue(){
    if(index == 'c' && index2 == 1){

        if(size[1][2] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[1][2] = 'O';
    }
    
 }
    else if(index == 'c' && index2 == 0){
     if(size[0][2] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }

     else{
       size[0][2] = 'O';
     }
     }
    else if(index == 'c' && index2 == 2){
    if(size[2][2] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();

    }
    else {
       size[2][2] = 'O';
      
     }
  }
     else if(index == 'b' && index2 == 0){
     if(size[0][1] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[0][1] = 'O';
      
     }
     }
     else if(index == 'b' && index2 == 1){
      if(size[1][1] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[1][1] = 'O';
      
     }
 }
     else if(index == 'b' && index2 == 2){
    if(size[2][1] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[2][1] = 'O';
      
     }
}
      else if(index == 'a' && index2 == 0){
     if(size[0][0] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[0][0] = 'O';
      
     }
}
     else if(index == 'a' && index2 == 1){
    if(size[1][0] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[1][0] = 'O';
      
     }
}
     else if(index == 'a' && index2 == 2){
     if(size[2][0] == 'X'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[2][0] = 'O';
      
     }

}

}
void storevalueX(){
    if(index == 'c' && index2 == 1){
     if(size[1][2] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[1][2] = 'X';
    } 
     }
    else if(index == 'c' && index2 == 0){
    if(size[0][2] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[0][2] = 'X';
      
     }
    }
    else if(index == 'c' && index2 == 2){
    if(size[2][2] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[2][2] = 'X';
    }
     }
     else if(index == 'b' && index2 == 0){
    if(size[0][1] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[0][1] = 'X';
    }
     }
     else if(index == 'b' && index2 == 1){
    if(size[1][1] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{ 
       size[1][1] = 'X';
    }
     }
     else if(index == 'b' && index2 == 2){
    if(size[2][1] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
   else{ 
       size[2][1] = 'X';
   }
     }
      else if(index == 'a' && index2 == 0){
    if(size[0][0] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[0][0] = 'X';
    }
     }
     else if(index == 'a' && index2 == 1){
    if(size[1][0] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else {
       size[1][0] = 'X';
    }
     }
     else if(index == 'a' && index2 == 2){
    if(size[2][0] == 'O'){
             cout <<" WRONG PLACE INPUT."<<endl;
             getch();
         }
    else{
       size[2][0] = 'X';
    }
     }

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