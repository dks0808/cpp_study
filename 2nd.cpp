#include <iostream>
#include <iomanip> //////////////////
using namespace  std;

int main()
{
    double result = 1;

    for(int i=0;i<10;i++)
        cout << fixed << setprecision(i) << result <<endl;  
    return 0;
}


