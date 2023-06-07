#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int table;

    table = 1;

    cout << "N\t\t10*N\t\t100*N\t\t1000*N\n" << endl;

    while( table <= 5 )
    {
        cout << table << "\t\t" << 10 * table << "\t\t" << 100 * table << "\t\t" << 1000 * table
        << endl;

        table++;
    }

    return 0;
}
