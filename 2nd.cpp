#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    double number ;
    int intpart;
    double fractpart;

    cout << "부동소수점 입력:";
    cin >> number;

    intpart = static_cast<int>(number);
    fractpart =number -intpart;

    cout << fixed << showpoint << setprecision;
    cout <<"원래값: "<< number <<endl;
    cout <<"정수부분:" << intpart <<endl;
    cout << "소수점 아래부분:" << fractpart;
    return 0;

}