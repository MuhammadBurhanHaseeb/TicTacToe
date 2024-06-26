#include <iostream>
using namespace std;
int main()
{
/* enum color_type {red, orange, yellow, green, blue, violet};
 color_type shirt, pants;
 shirt = red;
 pants = blue;
 cout << shirt << " " << pants << endl;
 return 0;*/
 /* const int LENGTH = 21;
char message[LENGTH];
 cout << "Enter a sentence on the line below." << endl;
 cin >> message;
 cout << message << endl;*/
/* const int LENGTH = 21;
char message[LENGTH];
 cout << "Enter a sentence on the line below." << endl;
 cin.getline(message, LENGTH, '\n');
 cout << message << endl;*/
 /*const int LENGTH = 21;
char message[LENGTH];
int i;
cout << "Enter a sentence on the line below." << endl;
cin >> message[0];
 
i = 0;
 while (i < LENGTH - 1 && message[i] != '\n')
 {
 ++i;
 cin >> message[i];
 }
 message[i] = '\0'; // Replace '\n' if that was read.
 // Otherwise replace the last character read.
 cout << message << endl;*/
 /*int i = 5;
 while(i>0)
 {
--i;
cout<< i<<endl;
 }*/

/* int n;
float x = 3.8;
cout<< int(x);
 cout << "n = " << n << endl;*/
cout << "Here's a list of the ASCII values of all the upper"
 << " case letters.\n";
char letter = 'A';
cout<< int(letter)<<endl;
 //while (letter <= 'Z')
 cout << letter << " " << int(letter) << endl;


}
