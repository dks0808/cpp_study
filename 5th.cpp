#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n; 
    long double number;

    do
    {
        cout << "Enter the repeat number: "<< endl;
        cin >> n;
    } while (n <= 0);

    long double sum = 0;
    long double tsum = 1;   
    
    for(int count = 0; count < n; count++)
    {
        cout << "Enter the numbers which you want : "<< endl;
        cin >> number;
        sum = sum + number;
        tsum = tsum * number;
    } 
    
    cout << fixed << setprecision(5) << showpoint;
    cout << "Sum of numbers that you entered : " << sum << endl;
    cout << "Product of numbers that you entered : " << tsum << endl;

    return 0;
}