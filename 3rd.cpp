#include <iostream>
#include <iomanip>
#include <cmath>
#include<ctime>
using namespace std;

class RandomInteger
{
    private:
        int low;
        int high;
        int value;
    public:
        RandomInteger(int low, int high);
        ~RandomInteger();

        RandomInteger(const RandomInteger& random) = delete;
        void print() const;

};
// 생성자
RandomInteger::RandomInteger(int lw, int hh)
:low(lw), high(hh)
{
    srand(time(0));
    int temp = rand();
    value = temp % (high-low+1) + low;

}

//소멸자
RandomInteger::~RandomInteger()
{

}

void RandomInteger::print() const
{
    cout << value << endl;
}


int main()
{   

    RandomInteger r1(100, 200);
    cout << "between 100~200 random number: ";
    r1.print();

    RandomInteger r2(400, 600);
    cout << "between 400~600 random number: ";
    r2.print();

    RandomInteger r3(1500, 2000);
    cout << "between 1500~2000 random number: ";
    r3.print();

    return 0; 
    
}
