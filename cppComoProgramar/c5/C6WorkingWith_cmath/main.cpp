/*
+rounding functions

round() // arredonda(eleva) um número para um inteiro mais próximo.
        obs: em meio termo o round sempre arredondará para um valor acima;
floor() // (piso) = arredonda um número para um valor mais baixo;
ceil()  // (teto) = arredonda um número para um valor mais acima;
trunc() // faz o truncamento (considera apenas a parte interia, ignorando a parte decimal);

-> Todas elas recebem apenas um dado de entrada ou seja, somente um parametro.
-> Todas elas retornam um valor(número) real.


+trigonometric functions
1° calcula-se o ângulo(em graus). Fórmula: X = ang°*PI/180

seno = sin(ang°);
cosseno = cos(ang°);
tangente = tan(ang°);

+functions pow, sqrt, abs, fabs
pow(base,expoente) // em double/float calcula a potencia
sqrt(x)   // calcula a raiz quadrada de um número

abs()    // por int coverte o valor em absoluto
fabs()   // por float coverte o valor em absoluto

obs: -> valor absoluto(pega o valor sem condirar o sinal)
*/
#include <iostream>
#include <cmath>
using namespace std;


float functionRound( float x1, float x2, float x3, float x4, float x5, float x6 )
{
    cout << "a1 = " << x1 << "\t  round(a1): "  << round(x1) << endl;
    cout << "a2 = " << x2 << "\t  round(a2): "  << round(x2) << endl;
    cout << "a3 = " << x3 << "\t  round(a3): "  << round(x3) << endl;
    cout << "a4 = " << x4 << "\t  round(a4): "  << round(x4) << endl;
    cout << "a5 = " << x5 << "\t  round(a5): "  << round(x5) << endl;
    cout << "a6 = " << x6 << "\t  round(a6): "  << round(x6) << "\n\n" << endl;
};



int main()
{
    // reference: -6   -5   -4   -3   -2   -1   0   1   2   3   4   5   6

    float a1, a2, a3, a4, a5, a6; // para round
    float b1, b2, b3, b4, b5, b6; // para floor
    float c1, c2, c3, c4, c5, c6; // para ceil
    float d1, d2, d3, d4, d5, d6; // para trunc

    // para round
    a1 = 2.3;
    a2 = 3.8;
    a3 = 5.5;
    a4 = -2.3;
    a5 = 3.8;
    a6 = -5.5;

    functionRound(a1, a2, a3, a4, a5, a6);

    // para floor
    b1 = 2.3;
    cout << "b1 = 2.3\t floor(b1): "<< floor(b1) << endl;
    b2 = 3.8;
    cout << "b2 = 3.8\t floor(b2): "<< floor(b2) << endl;
    b3 = 5.5;
    cout << "b3 = 5.5\t floor(b3): "<< floor(b3) << endl;
    b4 = -2.3;
    cout << "b4 = -2.3\t floor(b4): "<< floor(b4) << endl;
    b5 = 3.8;
    cout << "b5 = 3.8\t floor(b5): "<< floor(b5) << endl;
    b6 = -5.5;
    cout << "b6 = -5.5\t floor(b6): "<< floor(b6) << "\n\n" << endl;


    // para ceil
    c1 = 2.3;
    cout << "c1 = 2.3\t ceil(c1): "<< ceil(c1) << endl;
    c2 = 3.8;
    cout << "c2 = 3.8\t ceil(c2): "<< ceil(c2) << endl;
    c3 = 5.5;
    cout << "c3 = 5.5\t ceil(c3): "<< ceil(c3) << endl;
    c4 = -2.3;
    cout << "c4 = -2.3\t ceil(c4): "<< ceil(c4) << endl;
    c5 = 3.8;
    cout << "c5 = 3.8\t ceil(c5): "<< ceil(c5) << endl;
    c6 = -5.5;
    cout << "c6 = -5.5\t ceil(c6): "<< ceil(c6) << "\n\n" << endl;


    // para trunc
    d1 = 2.3;
    cout << "d1 = 2.3\t trunc(d1): "<< trunc(d1) << endl;
    d2 = 3.8;
    cout << "d2 = 3.8\t trunc(d2): "<< trunc(d2) << endl;
    d3 = 5.5;
    cout << "d3 = 5.5\t trunc(d3): "<< trunc(d3) << endl;
    d4 = -2.3;
    cout << "d4 = -2.3\t trunc(d4): "<< trunc(d4) << endl;
    d5 = 3.8;
    cout << "d5 = 3.8\t trunc(d5): "<< trunc(d5) << endl;
    d6 = -5.5;
    cout << "d6 = -5.5\t trunc(d6): "<< trunc(d6) << "\n\n" << endl;

    return 0;
}
