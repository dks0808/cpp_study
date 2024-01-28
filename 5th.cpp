#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    unsigned long long Factorial=1; 
    int n ;
    cout << "Enter the number you want: ";
    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        
        Factorial *=i;
    }

    cout << n <<"! = " <<Factorial<< endl;
    return 0;
}