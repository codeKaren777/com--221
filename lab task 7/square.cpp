#include <iostream>>
#include "square.h"

shapes::square::square(): length(0.0f){}
shapes::square::square(float newlength): length(0.0f){}
shapes::square::~square(){}

void shapes::square::SetLength(float newlength);

float shapes::square::GetLength() const{
    return length;
}