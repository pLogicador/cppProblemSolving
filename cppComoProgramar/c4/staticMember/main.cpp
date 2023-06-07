/* Testing and studing
    VARI�VEIS DE CLASSE IN cpp
- conhecidas tam�m como vari�veis de membro est�ticas, sobrepondo a vari�veis de membro regulares, para que estas sejam vinculadas
a cada instancia do objeto, enquanto as vari�veis de calsse(ou de membro est�ticas) s�o anexadas � classe como se a pr�pria classe
tivesse uma vari�vel
- outro nome para as vari�veis de membro regulares � 'vari�veis de instancia'. Porque essas s�o anexadas a cada instancia de
objeto da classe



*/
#include <iostream>

using namespace std;
//Exemple

class Animal
{
public:
    string species; // dando aos objetos animal uma vari�vel de membro de instancia regular, chamada de esp�cie sendo p�blica
    static int total; // vari�vel de membro est�tico sendo um n�mero inteiro chamado de total
  //static init total = 0; levaria a um erro, pois n�o � permitido
    const string planet = "Earth"; // podemos inicializar uma vari�vel de classe const denttro da defini��o de classe

    // construtor para definir a vari�vel
    Animal( string animal_species )
    {
        species = animal_species; // definido a vari�vel de membro species como animal_species
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

    // agora essas vari�veis de membro est�oo ligadas para a intancia do objeo
    // Por�m, uma vari�vel de membro est�tico ou de classe est� ligada a classe

    cout << "total: " << Animal::total << endl;

    // objeto alocado dinamicamente precisa ser deletado ap�s o trabalho com ele
    Animal *bear =  new Animal("bear");

    cout << "total: " << Animal::total << endl;

    // deletando objeto alocado dinamicamente. Por�m deve-se criar um destrutor
    delete  lion;

    cout << "total: " << Animal::total << endl;

    return 0;
}
