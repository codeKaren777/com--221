#pragma once
#include <iostream>
using namespace std;

namespace shapes{
    class area{
        public:
        static float calculateSquareArea(const sqaure& param);
        static float calculateTriangleArea(const triangle& paramtwo);
        static float calculateCircleArea(const circle& paramthree);
    };
}