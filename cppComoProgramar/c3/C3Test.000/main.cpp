/*// Definir a classe GradeBook com uma fun��o-membro displayMessage/mensagem de exibi��o;
// Criar um objeto GradeBook e chama sua fun��o  displayMessage.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string> // utiliza classe de string padr�o C++
using std::string;
using std::getline;

// defini��o da classe e seu corpo
class GradeBook
{
public:

    // fun��o que exibe uma messagem de boas-vindas ao usu�rio do GradeBook
    // define o cabe�alho da fun��o
    void displayMessage( string courseName )
    //corpo da fun��o
    {
        cout << "Welcome to the Grade Book! " << courseName << "!"<< endl;

    } // fim-corpo da fun��o displayMessage

}; // fim da classe GradeBook

// inicia execu��o
int main()
{
    string nameOfCourse; // strings de caracteres paara armazenar o nome do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBoook

    cout << "Please enter the course name: " << endl;
    getline( cin, nameOfCourse ); // l� o nome de um curso com espa�os em branco
    cout << endl;

    // chama a fun��o displayMessage do objeto; e passa nameOfCourse como um argumento
    myGradeBook.displayMessage( nameOfCourse );

    return 0; // indica termina��o bem-sucedida

} // fim de execu��o
*/


/* Define a classe GradeBook que cont�m um membro de dados courseName
 e fun��es-mebro para configurar e obter seu valor;
 Cria e manipula um objeto GradeBook com essa fun��o.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string> // o programa utiliza classe de string padr�o C++
using std::string;
using std::getline;


class GradeBook
{
public:
    // fun��o que configura o nome do curso
    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    } // fim da fun��o setCourse

    // funn��o que obt�m o nome do curso
    string getCourseName()
    {
        return courseName; // retorna o courseName do objeto

    } // fim da fun��o getCourseName

    void displayMessage()
    {
        // essa instru��o chama getCourseName para obter o nome do curso que esse GradeBook representa
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;

    } // fim da fun��o displayMessage

private:
    string courseName; // nome do curso para esse GradeBook.

}; // Fim da classe GradeBook

// Inicio de execu��o
int main()
{
    string nameOfCourse; // strings de caracteres para armazenar o nomme do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado my GradeBook

    // exibe valor iniciaal de courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "\nPlease enter the course name:" << endl;
    getline( cin, nameOfCourse ); // leitura do nome do curso com espa�os em branco
    myGradeBook.setCourseName( nameOfCourse ); // confugura o nome do curso;

    cout << endl; // gera sa�da de uma llinha em branco
    myGradeBook.displayMessage(); // exibi��o da mensagem oom o novo nome do curso

    return 0; // terminou bem!
}
