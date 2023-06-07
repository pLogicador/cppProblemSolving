#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main()
{

    double salarioBruto, salarioTotal;
    double taxaDeComissao, salarioBase;

    salarioBruto = 0;
    salarioTotal = 0;
    taxaDeComissao = 0.09;
    salarioBase = 200;

    cout << "Entre com as vendas em dolar (-1 para terminar): ";
    cin >> salarioBruto;

    while( salarioBruto != -1 )
    {

        salarioTotal = salarioBase + salarioBruto * taxaDeComissao;

        cout << setprecision(2) << fixed;
        cout << "Salario: " << "$"<< salarioTotal << endl;

        cout << "\n\n";

        cout << "Entre com as vendas em dolar (-1 para terminar): ";
        cin >> salarioBruto;
    }

    return 0;
}
