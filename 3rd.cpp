#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int fun(int a, int b);
int fun(int a);
int fun(char a);

int main()
{
    int a = 141;
    int b = 128;
    char c = 'a';
    cout <<"This is function 1 overloading test: " << fun(a,b) << endl;
    cout <<"This is function 2 overloading test: " << fun(b) << endl;   
    cout <<"This is function 3 overloading test: " << fun(c) << endl;    
    
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

int fun(char a)
{
    cout << a*3 <<endl;
    return 2;

}
