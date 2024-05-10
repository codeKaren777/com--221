#pragma once
#include <iostream>
using namespace std;

namespace shapes{
    class circle{
        private:
        float Radius;

        public:
        circle();
        circle(float newradius); 
        ~circle();

        void SetRadius(float newradius);

        float GetRadius() const;
    };
}