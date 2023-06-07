#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

    while( studentCounter <= 10 )
    {
        cout << "Enter result (1 = pass, 2 == fail): ";
        cin >> result;

        if( result == 1 )
        {
            passes += 1; // or passes++
        }
        else
            if( result == 2 )
        {
            failures += 1; // or failures++
        }
        else
        {
            cout << "Incorrect! Try again input." << endl;
            studentCounter--;
        }

        studentCounter += 1; // sttudentCounter++;
    }

    cout << "Passed" << passes << endl;
    cout << "Failed" << failures << endl;

    if( passes > 8 )
        cout << "Bonus to instructor!" << endl;

    return 0;
}
