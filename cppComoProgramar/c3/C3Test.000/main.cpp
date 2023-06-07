/*// Definir a classe GradeBook com uma função-membro displayMessage/mensagem de exibição;
// Criar um objeto GradeBook e chama sua função  displayMessage.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string> // utiliza classe de string padrão C++
using std::string;
using std::getline;

// definição da classe e seu corpo
class GradeBook
{
public:

    // função que exibe uma messagem de boas-vindas ao usuário do GradeBook
    // define o cabeçalho da função
    void displayMessage( string courseName )
    //corpo da função
    {
        cout << "Welcome to the Grade Book! " << courseName << "!"<< endl;

    } // fim-corpo da função displayMessage

}; // fim da classe GradeBook

// inicia execução
int main()
{
    string nameOfCourse; // strings de caracteres paara armazenar o nome do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBoook

    cout << "Please enter the course name: " << endl;
    getline( cin, nameOfCourse ); // lê o nome de um curso com espaços em branco
    cout << endl;

    // chama a função displayMessage do objeto; e passa nameOfCourse como um argumento
    myGradeBook.displayMessage( nameOfCourse );

    return 0; // indica terminação bem-sucedida

} // fim de execução
*/


/* Define a classe GradeBook que contém um membro de dados courseName
 e funções-mebro para configurar e obter seu valor;
 Cria e manipula um objeto GradeBook com essa função.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string> // o programa utiliza classe de string padrão C++
using std::string;
using std::getline;


class GradeBook
{
public:
    // função que configura o nome do curso
    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    } // fim da função setCourse

    // funnção que obtém o nome do curso
    string getCourseName()
    {
        return courseName; // retorna o courseName do objeto

    } // fim da função getCourseName

    void displayMessage()
    {
        // essa instrução chama getCourseName para obter o nome do curso que esse GradeBook representa
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;

    } // fim da função displayMessage

private:
    string courseName; // nome do curso para esse GradeBook.

}; // Fim da classe GradeBook

// Inicio de execução
int main()
{
    string nameOfCourse; // strings de caracteres para armazenar o nomme do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado my GradeBook

    // exibe valor iniciaal de courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "\nPlease enter the course name:" << endl;
    getline( cin, nameOfCourse ); // leitura do nome do curso com espaços em branco
    myGradeBook.setCourseName( nameOfCourse ); // confugura o nome do curso;

    cout << endl; // gera saída de uma llinha em branco
    myGradeBook.displayMessage(); // exibição da mensagem oom o novo nome do curso

    return 0; // terminou bem!
}
