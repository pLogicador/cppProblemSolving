#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

class Employee
{
private:
    string name;
    string lastName;
    int monthlySalary;

public:
    explicit Employee( string, string, int );

    void setName( string );
    string getName() const;

    void setLastName( string );
    string getLastName() const;

    void setMonthlySalary( int );
    int getMonthlySalary() const;

};

// construtor
Employee::Employee( string name1, string name2, int salary)

    :   name( name1 ),
        lastName( name2 ),
        monthlySalary( salary )
{
    if( salary < 0 )
    {
        monthlySalary = 0;
    }
}

// get e set para name
void Employee::setName( string name1 )
{
    name = name1;
}

string Employee::getName() const
{
    return name;
}

// get e set para LastName
void Employee::setLastName( string name2 )
{
    lastName = name2;
}

string Employee::getLastName() const
{
    return lastName;
}

// set e get para monthlySalary
void Employee::setMonthlySalary( int salary )
{
    monthlySalary = salary;
}

int Employee::getMonthlySalary() const
{
    return monthlySalary;
}

// main para testar a classe Employee
int main()
{
    int yearlySalary1, yearlySalary2;

    Employee employee1( "Pedro", "Emanuel", 2002 );
    Employee employee2( "John", "Smith", 2000 );

    yearlySalary1 = 12 * employee1.getMonthlySalary();
    yearlySalary2 = 12 * employee2.getMonthlySalary();

    cout << "yearly salary of employee: " << employee1.getName() << " " << employee1.getLastName() << " is " << employee1.getMonthlySalary() << " . " << endl;
    cout << "yearly salary of employee: " << employee2.getName() << " " << employee2.getLastName() << " is " << employee2.getMonthlySalary() << " . " << endl;

    int newYearlySalary1, newYearlySalary2;

    newYearlySalary1 = 1.1 * yearlySalary1;
    newYearlySalary2 = 1.1 * yearlySalary2;

    cout << "yearly salary of employee: " << employee1.getName() << " " << employee1.getLastName() << " after a 10 percent raise is " << newYearlySalary1 << " . " << endl;
    cout << "yearly salary of employee: " << employee2.getName() << " " << employee2.getLastName() << " after a 10 percent raise is " << newYearlySalary2 << " . " << endl;


    return 0;
}
