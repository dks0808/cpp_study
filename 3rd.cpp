#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int fun(int a, int b);

int fun(int a);



int main()
{
    cout <<"This is function 1 overloading test: " << fun(3,4) << endl;
    cout <<"This is function 2 overloading test: " << fun(10) << endl;    
    
    return 0; 
    
}
//
int fun(int a, int b)
{ 
    int c = a+b;
    cout << c << endl ;
    return 1;
}

int fun(int a)
{
    cout << ++a << endl;
    return 2;

}

