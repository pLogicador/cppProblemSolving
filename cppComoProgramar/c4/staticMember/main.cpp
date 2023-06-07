/* Testing and studing
    VARIÁVEIS DE CLASSE IN cpp
- conhecidas tamém como variáveis de membro estáticas, sobrepondo a variáveis de membro regulares, para que estas sejam vinculadas
a cada instancia do objeto, enquanto as variáveis de calsse(ou de membro estáticas) são anexadas à classe como se a própria classe
tivesse uma variável
- outro nome para as variáveis de membro regulares é 'variáveis de instancia'. Porque essas são anexadas a cada instancia de
objeto da classe



*/
#include <iostream>

using namespace std;
//Exemple

class Animal
{
public:
    string species; // dando aos objetos animal uma variável de membro de instancia regular, chamada de espécie sendo pública
    static int total; // variável de membro estático sendo um número inteiro chamado de total
  //static init total = 0; levaria a um erro, pois não é permitido
    const string planet = "Earth"; // podemos inicializar uma variável de classe const denttro da definição de classe

    // construtor para definir a variável
    Animal( string animal_species )
    {
        species = animal_species; // definido a variável de membro species como animal_species
        total++; // contador
    }
    // destrutor
    ~Animal()
    {
        total--;
    }


};

int Animal::total = 0;

int main()
{

    // criando instancias de objetos de animais
    // cada istanciaa de objeto pode ter um p species diferentes
    Animal *lion = new Animal("lion");
    Animal *tiger = new Animal("tiger");

    cout << "lion: " << lion->species << endl;
    cout << "tiger: " << tiger->species << endl;

    // agora essas variáveis de membro estãoo ligadas para a intancia do objeo
    // Porém, uma variável de membro estático ou de classe está ligada a classe

    cout << "total: " << Animal::total << endl;

    // objeto alocado dinamicamente precisa ser deletado após o trabalho com ele
    Animal *bear =  new Animal("bear");

    cout << "total: " << Animal::total << endl;

    // deletando objeto alocado dinamicamente. Porém deve-se criar um destrutor
    delete  lion;

    cout << "total: " << Animal::total << endl;

    return 0;
}
