#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int array[100];
    int no;
    cout << "how many no you want to enter in array";
    cin >> no;
    for (int x = 0; x < no; x++)
    {
        cout << "enter the element";
        cin >> array[x];
    }
    for (int a = 0; a < no; a++)
    {
        for (int b = a; b < no; b++)
        {
            if (array[a] > array[b])
            {
                int temp;
                temp = array[a];
                array[a] = array[b];
                array[b] = temp;
            }
        }
    }
    for (int y = 0; y < no; y++)
    {
        cout << array[y] << endl;
    }
}