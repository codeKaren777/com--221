#include "triangle.h"

shapes::triangle::triangle(): Base(0.0f), Height(0.0f){}
shapes::triangle::triangle(float newbase, float newheight): Base(0.0f),Height(0.0f){}
shapes::triangle::~triangle(){}

void shapes::triangle::SetBase(float newbase);

float shapes::triangle::GetBase() const{
    return Base;
}

void shapes::triangle::SetHeight(float newheight);

float shapes::triangle::GetHeight() const{
    return Height;
}