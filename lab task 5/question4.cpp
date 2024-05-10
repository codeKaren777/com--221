#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

int main() {
    int inputValue;

    cout << "Enter an integer between 5 and 10: ";
    cin >> inputValue;

    // Check if the input operation fails or if the entered value is not within the specified range
    while (cin.fail() || inputValue < 5 || inputValue > 10) {
        //checks if the user has entered a wrong type of input i.e. runs when the user enters a value which is not a number
        if (cin.fail()){
            cout<<"Sorry, you have entered an invalid number, please try again"<<endl;
            cin.clear(); // removes flag errors or deletes the error code
        }


        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input, in case you have enter a line of input values, the other values will be ignored upto to the end of the line

        cout << "You have entered "<< inputValue << " Please enter an integer between 5 and 10: ";
        cin >> inputValue;
    }

    cout << "your input value (" << inputValue << ") has been accepted"<< endl; 

    return 0;
}
