/* Defini��o de classe GradeBook apresenta a interface public da classe.
   Defini��es de fun��o-membro aparecem em GradeBook.cpp.
*/
#include <string>
using std::string;

// def da classe
class GradeBook
{
public:
    GradeBook( string );
    void setCourseName( string );
    string getCourseName();
    void displayMessage();
private:
    string courseName;
};
