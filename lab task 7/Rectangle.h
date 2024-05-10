#pragma once
#include <iostream>
using namespace std;

class Rectangle{
    private:
    float length;
    float width;
    
    public:
    Rectangle();
    Rectangle(float newlength, float newwidth);
    ~Rectangle();

    void SetLength(float newlength);

    float GetLength() const;

    void SetWidth(float newwidth);

    float GetWidth() const;

    float CalculateArea() const;
    };