// Definiição dos pré-processadores
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;


class Date
{
private:
    int day;
    int month;
    int year;

public:
    void GetDate( int d, int m, int y )
    {
        day = d;
        month = m;
        year = y;
    }

    // set configure
    void setDay( int d )
    {
        day = d;
    }

    void setMonth( int m )
    {
        month = m;
    }

    void setYear( int y )
    {
        year = y;
    }

    // get configure
    int getDay() const
    {
        return day;
    }
    int getMonth() const
    {
        return month;
    }
    int getYear() const
    {
        return year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }

};


int main()
{
    int d, m, y;
    Date objectDate;

    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;
    cout << endl;

    objectDate.GetDate( d, m, y);
    objectDate.displayDate();

    return 0;
}
