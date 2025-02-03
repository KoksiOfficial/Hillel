#include <iostream>
using namespace std;

int main()
{
    int array[10][10];
    int rows = sizeof(array) / sizeof(array[0]);
    int collumns = sizeof(array[0]) / sizeof(array[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < collumns; j++)
        {
            array[i][j] = 0;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
