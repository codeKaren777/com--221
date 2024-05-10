#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "rea.h"

using namespace shapes;
using namespace std;

int main() {
    char choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case '1': {
                double length;
                cout << "Enter the side length of the square: ";
                cin >> length;
                square square(length);
                cout << "Area of the square: " << Area::calculateSquareArea(param) << endl;
                break;
            }
            case '2': {
                double Base, Height;
                cout << "Enter the base and height of the triangle: ";
                cin >> Base >> Height;
                triangle triangleone(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(paramtwo) << endl;
                break;
            }
            case '3': {
                double Radius;
                cout << "Enter the radius of the circle: ";
                cin >> Radius;
                Circle circle(Radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(paramthree) << endl;
                break;
            }
            case '4':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
