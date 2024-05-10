#include <iostream>
#include "Rectangle.h"

int main(){
    Rectangle karen;
    Rectangle kadewere;

    float length, width;

    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter width:  ";
    cin>>width;

    karen.SetWidth(width);
    karen.SetLength(length);

    kadewere.SetWidth(width);
    kadewere.SetLength(length);

    cout<<"The area is:  "<<karen.CalculateArea()<<endl;
}