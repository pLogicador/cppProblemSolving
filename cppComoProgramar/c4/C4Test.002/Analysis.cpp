/* Analysis.cpp

   analisa os resultados do teste
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



#include "Analysis.h"

void Analysis::processExamResults()
{
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

    while( studentCounter <= 10 )
    {
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result;

        if( result == 1 )
            passes += 1;
        else
            failures += 1;

        studentCounter += 1;

    }
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    if( passes > 8 )
        cout << "Raise tuition " << endl;
}
