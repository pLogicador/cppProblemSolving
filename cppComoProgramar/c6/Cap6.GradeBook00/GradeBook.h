#include <string>
using std::string;


class GradeBook
{
public:
    GradeBook( string ); // o construtor inicializa o nome do curso
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // recupera o nome do curso
    void displayMessage(); // mensagem de boas-vindas
    void inputGrades(); // insere três notas fornecidas pelo usuário
    void displayGradeReport(); // relatório baseado nas notas
    int maximum( int, int, int ); // determina o máximo de 3 valores
private:
    string courseName; // nome do curso para esse GradeBook
    int studentMaximum; // máxima de três notas
};
