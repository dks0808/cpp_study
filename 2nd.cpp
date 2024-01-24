#include <iostream>
using namespace std;

int main()
{
    double num1,num2;
    
    cout << "첫번째 숫자 입력: " ;
    cin>> num1;

    cout<<"두번째 숫자 입력: ";
    cin >>num2;

    if (num1 != num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " > " << num2;
        }
        else 
        {
            cout << num2 << " > " << num1;
        }
    }
    else 
    {
        cout<< num1 << " = " <<num2;

    }

    return 0;
    

}