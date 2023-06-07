#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numb1, numb2, numb3, numb4, numb5, maior, menor;

    cout << "Enter five numbers: ";
    cin >> numb1 >> numb2 >> numb3 >> numb4 >> numb5;

    if(numb1 > numb2)
        maior = numb1;
    else
        menor = numb1;
    if(numb2 > numb1)
        maior = numb2;
    else
        menor = numb2;
    if(numb3 > numb1)
        maior = numb3;
    else
        menor = numb3;
    if(numb3 > numb2)
        maior = numb3;
    else
        menor = numb3;
    if(numb4 > numb1)
        maior = numb4;
    else
        menor = numb4;
    if(numb4 > numb2)
        maior = numb4;
    else
        menor = numb4;
    if(numb4 > numb3)
        maior = numb4;
    else
        menor = numb4;
    if(numb5 > numb1)
        maior = numb5;
    else
        menor = numb5;
    if(numb5 > numb2)
        maior = numb5;
    else
        menor = numb5;
    if(numb5 > numb3)
        maior = numb5;
    else
        menor = numb5;
    if(numb5 > numb4)
        maior = numb5;
    else
        menor = numb5;

    cout << "The greatest value is " << maior;
    cout << "\n\n";
    cout << "The smallest value is " << menor << endl;

    return 0;
}
