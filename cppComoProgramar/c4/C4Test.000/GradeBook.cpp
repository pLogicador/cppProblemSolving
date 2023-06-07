


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"


GradeBook::GradeBook( string name )
{
    setCourseName( name ); // valida e armazena courseName
}



void GradeBook::setCourseName( string name )
{
    if( name.length() <= 25 )
    {
        courseName = name;
    }
    else
    {
        courseName = name.substr( 0, 25 );
        cout << "Name \"" << name << "\" exceeds maximum length (25). \n"
            << "Limmiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to th grade boook for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    int average;

    total = 0;
    gradeCounter = 1;

    while( gradeCounter <= 10 )
    {
        cout << "Enter grade: ";
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    average = total / 10;

    cout << "\nTotal of all 10 grade is " << total << endl;
    cout << "Class average is " << average << endl;

}
