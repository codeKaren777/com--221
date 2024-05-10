#include "Rectangle.h"

Rectangle::Rectangle() : length(0.0f), width(0.0f){}
Rectangle::Rectangle(float newlength, float newlenth) : length(0.0f), width(0.0f){}

Rectangle::~Rectangle() {}

void Rectangle::SetLength(float newlength){
    length = newlength;
}

float Rectangle::GetLength() const{
    return length;
}

void Rectangle::SetWidth(float newwidth){
    width = newwidth;
}

float Rectangle::GetWidth() const{
    return width;
}

float Rectangle::CalculateArea() const {
    float area = length * width;
    return area;
}