// 5.9 GradeBook.h

#include <string> // programa utiliza classe de string padr�o C++
using std::string;


class GradeBook
{
public:
    GradeBook( string );           // o construtor inicializa o nome do curso
    void setCourseName( string );  // fun��o para configurar o nome do curso
    string getCourseName();       // fun��o para recuperar o nome do curso
    void displayMessage();         // exibe uma mensagem de boas-vindas
    void inputGrades();            // insere n�mero arbitr�rio de notas do usu�rio
    void displayGradeReport();     // exibe um relat�rio baseado nas notas
private:
    string courseName;       // nome do curso para esse GradeBook
    int aCount;             // contagem de notas A
    int bCount;
    int cCount;
    int dCount;
    int fCount;
};
