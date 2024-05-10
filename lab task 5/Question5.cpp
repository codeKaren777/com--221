#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function prototypes
void calculateTriangleArea();
void calculateSquareArea();
void calculateRectangleArea();

int main() {
    char choice;

    do {
        cout<<endl;
        cout << "Select a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit program\n";
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> choice;

        switch (choice) {
            case '1':
            calculateTriangleArea();
                break;
            case '2':
                calculateRectangleArea();
                break;
            case '3':
                calculateSquareArea();
                break;
            case '4':
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid input. Please enter 1, 2, 3, or 4." << endl;
        }

        // Clear the input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input, in case you have enter a line of input values, the other values will be ignored upto to the end of the line

    } while (choice != '4');

    return 0;
}

// Function to calculate the area of a triangle
void calculateTriangleArea() {
    double base, height, area;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    area = 0.5 * base * height;
    cout << "Area of the triangle: " << area<< endl;
}

// Function to calculate the area of a rectangle
void calculateRectangleArea() {
    double length, width, area;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    area =  length * width;
    cout << "Area of the rectangle: " << area<< endl;
}

// Function to calculate the area of a square
void calculateSquareArea() {
    double side, area;
    cout << "Enter the side length of the square: ";
    cin >> side;
    area =  side * side;
    cout << "Area of the square: " << area<< endl;

}
