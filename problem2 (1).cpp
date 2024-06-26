#include <iostream>
#include <string>

using namespace std;

// Data Structures
const int SIZE = 3;
string command;
int A[SIZE][SIZE];
int B[SIZE][SIZE];
int C[SIZE][SIZE];


// Function Protypes
void initialize(int arr[SIZE][SIZE]);
int getField(string line, int position);
void print(int arr[SIZE][SIZE]);
void sum(int arr[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE]);
void subtract(int arr[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE]);
void multiply(int arr[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE]);
void transpose(int arr[SIZE][SIZE]);
bool isDiagonal(int arr[SIZE][SIZE]);
bool isIdentity(int arr[SIZE][SIZE]);
bool isSymmetric(int arr[SIZE][SIZE]);

main()
{
    system("CLS");
    while(1)
    {
        cout << endl;
        cout << ">> ";
        cin >> command;
        cout << endl;

        // Matrices Initialization (input by user)
        if(command[0] == 'A' && command[1] == '=' && command[2] == '{')
        {
            initialize(A);
        }
        else if(command[0] == 'B' && command[1] == '=' && command[2] == '{')
        {
            initialize(B);
        }
        else if(command[0] == 'C' && command[1] == '=' && command[2] == '{')
        {
            initialize(C);
        }

        // Matrices printing Commands
        else if(command == "print(A)")
        {
            print(A);
        }
        else if(command == "print(B)")
        {
            print(B);
        }
        else if(command == "print(C)")
        {
            print(C);
        }

        // Matrices Addition Commands
        else if(command == "A=B+C" || command == "A=C+B")
        {
            sum(A, B, C);
        }
        else if(command == "B=A+C" || command == "B=C+A")
        {
            sum(B, A, C);
        }
        else if(command == "C=A+B" || command == "C=B+A")
        {
            sum(C, A, B);
        }

        // Matrices Subtraction Commands
        else if(command == "C=A-B")
        {
            subtract(C, A, B);
        }
        else if(command == "C=B-A")
        {
            subtract(C, B, A);
        }

        else if(command == "A=B-C")
        {
            subtract(A, B, C);
        }
        else if(command == "A=C-B")
        {
            subtract(A, C, B);
        }

        else if(command == "B=A-C")
        {
            subtract(B, A, C);
        }
        else if(command == "B=C-A")
        {
            subtract(B, C, A);
        }

        // Multiplication Commands
        else if(command == "C=A*B")
        {
            multiply(C, A, B);
        }
        else if(command == "C=B*A")
        {
            multiply(C, B, A);
        }

        else if(command == "A=B*C")
        {
            multiply(A, B, C);
        }
        else if(command == "A=C*B")
        {
            multiply(A, C, B);
        }

        else if(command == "B=A*C")
        {
            multiply(B, A, C);
        }
        else if(command == "B=C*A")
        {
            multiply(B, C, A);
        }

        // Transpose Commands
        else if(command == "transpose(A)")
        {
            transpose(A);
        }
        else if(command == "transpose(B)")
        {
            transpose(B);
        }
        else if(command == "transpose(C)")
        {
            transpose(C);
        }


        // Diagonal Matrix Conditions
        else if(command == "isDiagonal(A)")
        {
            cout << isDiagonal(A)<<endl;
        }
        else if(command == "isDiagonal(B)")
        {
            cout << isDiagonal(B)<<endl;
        }
        else if(command == "isDiagonal(C)")
        {
            cout << isDiagonal(C)<<endl;
        }

        // Identity matrix commands
        else if(command == "isIdentity(A)")
        {
            cout << isIdentity(A)<<endl;
        }
        else if(command == "isIdentity(B)")
        {
            cout << isIdentity(B)<<endl;
        }
        else if(command == "isIdentity(C)")
        {
            cout << isIdentity(C)<<endl;
        }

        //Symmetric matrix commands
        else if(command == "isSymmetric(A)")
        {
            cout << isSymmetric(A)<<endl;
        }
        else if(command == "isSymmetric(B)")
        {
            cout << isSymmetric(B)<<endl;
        }
        else if(command == "isSymmetric(C)")
        {
            cout << isSymmetric(C)<<endl;
        }

        // Scalar Multiplication Commands
        // else if(command[0] == 'A' && command[1] == '=' && (int(command[2]) >= 48 && int(command[2] <= 57)))
        // {
        //     cout << "Scalar Multiplication" << endl;
        //     cout << command[0] << command[1] << command[2] << "*" << command[command.length()-1];
        // }



        else if(command == "Exit")
        {
            break;
        }
        else
        {
            cout << "  Invalid Command" << endl;
        }

    }

}

int getField(string line, int position)
{
    string item;
    int commaCount = 1;
    
    for(int i=0; i<line.length(); i++)
    {
        if(line[i] == ',')
            commaCount++; 
        else if(commaCount == position)
            item = item + line[i];
    }
    
    return stoi(item);
}

void initialize(int arr[SIZE][SIZE])
{
    string line;
    int count = 1;

    for(int i=3; i<command.length()-1; i++)
        line = line + command[i];
    
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            arr[i][j] = getField(line, count);
            count++;
        }
    }  
}

void print(int arr[SIZE][SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void sum(int arr[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
                arr[i][j] = arr2[i][j] + arr3[i][j];
        }
    }
}

void subtract(int arr[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
                arr[i][j] = arr2[i][j] - arr3[i][j];
        }
    }
}

void multiply(int arr[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                arr[i][j] += arr2[i][k] * arr3[k][j];
            }
        }
    }
}

void transpose(int arr[SIZE][SIZE])
{
    int temp;
    for(int i=0; i<SIZE; i++)
    {
        for(int j=i; j<SIZE; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
}

bool isDiagonal(int arr[SIZE][SIZE])
{
    bool flag = 1;
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            if(i == j)
            {
                continue;
            }
            else if(arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    return flag;
}

bool isIdentity(int arr[SIZE][SIZE])
{
    bool flag = 1;
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            if(i == j)
            {
                if(arr[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if(arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    return flag;
}

bool isSymmetric(int arr[SIZE][SIZE])
{
    bool flag = 1;
    for(int i=0; i<SIZE; i++)
    {
        for(int j=i; j<SIZE; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                flag = 0;
            }
        }
    }
    return flag;
}

