#pragma once
#include <iostream>

using namespace std;

namespace shapes{
    class triangle{
        private:
        float Base;
        float Height;

        public:
        triangle();
        triangle(float newbase, float newheight);
        ~triangle();

        void SetBase(float newbase);

        float GetBase() const;

        void SetHeight(float newheight);

        float GetHeight() const;
    };
}