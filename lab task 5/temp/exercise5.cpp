# include <iostream>
double CalculateSquareArea(double side);
double CalculateRectangleArea(double length, double width);
double CalculateTriangleArea(double base, double height);

using namespace std;
int main(){
    int choice;
    double side,length,width,base,height;

    do{
        cout <<"please enter the number of shape to calculate area:"<<endl;
        cout<<"1.Square"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Triangle"<<endl;
        cout<<"4.Quit selection"<<endl;
        cout<<"Enter selection:";
        cin>> choice;
        switch (choice){
            case 1:
            cout<<"enter the side length of the square:";
            cin>> side;
            cout<< "Area of the Square:"<<CalculateSquareArea(side)<<endl;
            break;
            case 2:
            cout<<"enter the length of the Rectangle:";
            cin>> length;
            cout<<"enter the width of the rectangle:";
            cin>> width;
            cout<<"Area of the Rectangle:"<<CalculateRectangleArea(length,width)<<endl;
            break;
            case 3:
            cout<<"enter the base of thr Triangle:";
            cin>> base;
            cout<<"enter the height of the triangle:";
            cin>>height;
            cout<<"Area of the Triangle:"<< CalculateTriangleArea(base, height)<<endl;
            break;
            case 4:
            cout<<"Exiting program"<<endl;
            break;
            default:
            cout<<"Invalid input,please enter a number between 1 and 4."<<endl;

 }

    }while (choice !=4);
    return 0;

}
double CalculateSquareArea(double side){
    return side * side;
}
double CalculateRectangleArea(double length,double width){
    return length * width;
}
double CalculateTriangleArea(double base,double height){
    return 0.5 * base * height;
}