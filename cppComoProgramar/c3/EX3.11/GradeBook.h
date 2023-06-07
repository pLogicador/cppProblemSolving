/* Modificando a classe GradeBook

  --GradeBook.h--
*/

#include <string>
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook( string, string ); // construtor que inicaliza courseName e instructorName

    void setCourseInstructorName( string ); // função que configura o nome do instrutor do curso
    string getCourseInstructorName(); // função que obtém o nome do instrutor do curso

    void displayMessage(); // função que exibe um mensagem de boas-vindas

    void setCourseName( string ); // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
private:
    string courseName; // nome do curso para esse GradeBook

    string courseInstructorName; // nome do instrutor do curso
}; // fim classe

