#pragma once
#using namespace std;

namespace shapes{
    class square{
        private:
        float length;

        public:
        square();
        square(float newlenth);
        ~square();

        void SetLength(float newlength);

        float GetLength() const;
    };
}