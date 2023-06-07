// Exercício 4.21: ex04_21.cpp
// O que esse programa imprime?
 #include <iostream>
 using std::cout;
 using std::endl;

 int main()
 {
    int count = 1; // INICIALIZAÇÃO DA CONTAGEM

    while ( count <= 10 ) // LOOP EM 10x
    {
        cout << ( count % 2 ? "****" : "++++++++" ) << endl;
        count++; // CONTAGEM INCREMNTADA
    }

    return 0;
}
