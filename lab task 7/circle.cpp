#include "circle.h"

shapes::circle::circle(): Radius(0.0f){}
shapes::circle::circle(float newradius): Radius(0.0f){}
shapes::circle::~circle(){}

void shapes::circle::SetRadius(float newradius);

float shapes::circle::GetRadius() const{
    return Radius;
}