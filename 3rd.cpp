#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.141592653589793239462;
    int n;
    double s, peri, area;

    do
    {
        cout << "변의 개수를 입력하세요(4이상의 정수): ";
        cin >>n;

    } while (n < 4);

    do
    {
        cout << "변의 길이를 입력하세요 : ";
        cin >> s;

    } while (s <= 0.0);
    
    peri = n*s;
    area = (n*pow(s,2))/(n*tan(PI/n));
    cout <<"둘래 : "<<peri <<endl;
    cout << "넓이 : " << area <<endl;

    return 0; 
    
}