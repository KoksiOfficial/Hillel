#include <iostream>
using namespace std;

int main()
{
    const int rows = 4;
    const int columns = 4;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            arr[i][j] = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cout << "arr[" << i << "][" << j << "] : " << arr[i][j] << endl;
    
    return 0;
}