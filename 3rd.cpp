#include <iostream>
#include <iomanip>
using namespace std;

int main();
{
    int number_of_month;
    int startDay ;
    int col = 1;

    do 
    {
        cout << "한 달의 날짜 수를 입력하세요.(28~31) : " ;
        cin >> number_of_month;
    }while (28 > number_of_month || number_of_month > 31 );
    do 
    {
        cout << "첫날의 요일을 입력(0~6) : ";
        cin >> startDay;
    }while (startDay < 0 || startDay >6 );

    cout <<endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat" <<endl;
    cout <<"--- --- --- --- --- --- ---" <<endl;

    for (int space =0; space <startDay; space ++)
    {
        cout << "  ";
        col ++;

    }
    
    for(int day =1 ; day<=number_of_month ; day ++)
    {
        cout <<setw(3) <<day << "";
        col ++;
        if(col<7)
        {
            cout <<endl;
            col =1;
        }
    }
    return 0;
}
