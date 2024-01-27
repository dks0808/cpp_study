#include <iostream>
using namespace std;

int main()
{
    unsigned number, firstdigit;
    
    cout << "Enter the plus integer."<<endl;
    cin >> number ;
    firstdigit = number % 10;
    cout << "Number: " << number <<endl;
    cout << "The first location: " <<firstdigit<< endl;
    return 0;
}