// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CAPÍTULO 4: Computação

//“Se os resultados não precisam estar corretos, posso chegar a eles tão rápido quanto queira.” — Gerald M.Weinberg



#include "std_lib_facilities.h"
#include <iostream>


int Square(int rvalue) 
{
    return rvalue * rvalue;
}

int main()
{
    std::cout << "Hello World!\n\n";


    try 
    {
        int x;
        vector<int> v;

        while (cin >> x) 
        {
            v.push_back(x);
        }

        for (int i = 0; i <= v.size(); ++i)
        {
            std::cout << "v[" << i << "] == " << v[i] << std::endl;
        }
    }
    catch (out_of_range) 
    {
        cerr << "Opa! Erro de limite\n";
        return 1;
    }
    catch (...) 
    {
        cerr << "Excecao: algo errado aconteceu\n";
        return 2;
    }




    /*-------------------------------------------------------------------*/
    /*
    //Inicializando objetos lvalue's comprimento e largura com constantes rvalue's
    int length = 20;
    int width = 40;

    //Calculando a área
    int area = length * width;  

    int perimeter = (length + width) * 2;

    int a = 0, b = 0;
    */

    /*-------------------------------------------------------------------*/
    /*
    std::cout << "Please, input two numbers: " << "\n";
    cin >> a >> b;

    if (a < b) 
    {
        cout << "max(" << a << ", " << b << ") eh " << b << "\n";
    }
    else
    {
        cout << "max(" << a << ", " << b << ") eh " << a << "\n";
    }
    */
    /*-------------------------------------------------------------------*/
    /*
    const double cm_por_pol = 2.54; //Número de centímetros em uma polegada
    double comprimento = 1;         //Comprimento, em polegadas ou centímetros
    char unidade = ' ';             //Um espaço não é uma unidade



    cout << "Por favor, informe o comprimento seguido pela unidade (c ou p):\n";
    cin >> comprimento >> unidade;

    if (unidade == 'p') 
    {
        cout << comprimento << "pol == " << cm_por_pol * comprimento << "cm\n";
    }
    else if (unidade == 'c') {
        cout << comprimento << "cm == " << comprimento / cm_por_pol << "pol\n";
    }
    else {
        cout << "Desculpe, nao reconheco a unidade indicada por '" << unidade << "'\n";
    }
    */
    /*-------------------------------------------------------------------*/
    /*
    const double cm_por_pol = 2.54; // número de centímetros em uma polegada
    double comprimento = 1; // comprimento, em polegadas ou centímetros
    char unidade = 'a';
    cout << "Por favor, informe o comprimento seguido pela unidade (c ou p):\n";
    cin >> comprimento >> unidade;
    switch (unidade) {
    case 'p':
        cout << comprimento << "pol == " << cm_por_pol * comprimento << "cm\n";
            break;
    case 'c':
        cout << comprimento << "cm == " << comprimento / cm_por_pol << "pol\n";
            break;
    default:
        cout << " Desculpe, não reconheço a unidade indicada por '" << unidade << "'\n";
            break;
    }
    */

    

    /*
    for (int i = 0; i < 100; ++i)
    {
        std::cout << i << '\t' << Square(i) << "\n";
    }
    */

   
    

    /* TENTE ISTO
    O caractere 'b' é char('a'+1), 'c' é char('a'+2), etc. Use um laço para imprimir 
    uma tabela de caracteres com seu valores inteiros correspondentes:
    a 97
    b 98
    . . .
    z 122                                                       
    */






    //Terminação bem sucedida
    return 0;
}








/*      Fundamentos

O computador é o hardware no qual executamos o programa




*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
