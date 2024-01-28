#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int base, exponent ;
    
    long double power=1;
    
    do
    {
        cout << "Enter the base & exponent number: ";
        cin >> base >> exponent;
        
    } while (base == 0);

    if (exponent<0)
    {
        for(int i = 0; exponent> i; i++)
        {
            power = power / base;
        }
    }

    else if (exponent>0)
    {
        for (int i = 0; exponent > i; i++)
        {
            power = power * base;
        }
    }

    else
    {
        cout << "power is \'1\' ";
    }  
    cout << fixed << setprecision(3) << showpoint;
    cout << "Entered the base number : " << base <<endl;
    cout << "Entered the exponent number : " << exponent<< endl;
    cout << "Power of entered base & exponenet : " << power ;
    return 0;
}