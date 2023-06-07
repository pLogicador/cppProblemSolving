// 5.9 GradeBook.h

#include <string> // programa utiliza classe de string padrão C++
using std::string;


class GradeBook
{
public:
    GradeBook( string );           // o construtor inicializa o nome do curso
    void setCourseName( string );  // função para configurar o nome do curso
    string getCourseName();       // função para recuperar o nome do curso
    void displayMessage();         // exibe uma mensagem de boas-vindas
    void inputGrades();            // insere número arbitrário de notas do usuário
    void displayGradeReport();     // exibe um relatório baseado nas notas
private:
    string courseName;       // nome do curso para esse GradeBook
    int aCount;             // contagem de notas A
    int bCount;
    int cCount;
    int dCount;
    int fCount;
};
