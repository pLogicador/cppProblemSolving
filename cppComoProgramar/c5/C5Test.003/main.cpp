// instrução de repetição do...while.

#include <iostream>
using std:cout;
using std:endl;

int main()
{
    int counter = 1;

    do
    {
        cout << counter << " "; // exibe o contador
        counter++; // incrementa o contador
    } while ( counter <= 10 ); // fim instrução do...while

    cout << endl;

    return 0;
}
