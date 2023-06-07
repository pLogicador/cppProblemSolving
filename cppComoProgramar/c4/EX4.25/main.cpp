#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int size, row, column;

    row = 1;
    column = 1;

    cout << "Input size the square: ";
    cin >> size;

    while( row <= size )
    {
        while( column <= size )
        {
            if( row == 1  || row == size || column == 1 || column == size )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            column++;
        }

        cout << "\n";
        row++;
        column = 1;

    }

    return 0;
}
