// GradeBook.h


#include <string>
using std::string;


class GradeBook
{
public:
    GradeBook( string );
    void setCourseName( string );
    string getCourseName();
    void displayMessage();
    void determineClassAverage();
private:
    string courseName;
};
