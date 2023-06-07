#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numb1, numb2, numb3, sum, average, product, menor, maior;

    cout << "Enter three values integers: ";
    cin >>  numb1 >> numb2 >> numb3;

    sum = numb1 + numb2 + numb3;
    product = numb1 * numb2 * numb3;
    average = (numb1 + numb2 + numb3) * 3;

    if(numb1 > numb2)
        maior = numb1;
    if(numb1 < numb2)
        menor = numb1;
    if(numb2 > numb1)
        maior = numb2;
    if(numb2 < numb1)
        menor = numb2;
    if(numb3 > numb2)
        maior = numb3;
    if(numb3 < numb2)
        menor = numb3;
    if(numb3 > numb1)
        maior = numb3;
    if(numb3 < numb1)
        menor = numb3;

    cout << "This is sum for the values: " << sum;
    cout << "\n\n";
    cout << "This is average for the values: " << average;
    cout << "\n\n";
    cout << "This is product for the values: " << product;
    cout << "\n\n";

    cout << "maior: " << maior;
    cout << "\n\n";
    cout << "menor: " << menor;
    cout << "\n\n";

    return 0;
}
