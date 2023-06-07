#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const double PI = 3.14159;

int main()
{
    double radius, diameter, circumference, area;

    cout << "Enter radius and a circle: ";
    cin >> radius;

    diameter = radius * 2;
    circumference = 2 * PI * radius;
    area = PI * (radius * radius);

    cout << "DIAMTER, CIRFUMFERENCE AND AREA of CIRCLE\n";

    cout << "Diameter is " << diameter << endl;
    cout << "Circumference is " << circumference << endl;
    cout << "Area is: " << area << endl;

    return 0;
}
