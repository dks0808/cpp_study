#include <iostream>
using namespace std;

int main()
{   
    short s = 1;
    short s_max = s * (-33000);
    short s_min = s * 33000;


    unsigned u = 0;
    unsigned u_max = u - 5000000000;
   
    
    cout << "Short integer max, min: " << s_max << ","<<s_min <<endl; 
    cout << "Unsigned integer max, min: " << u_max <<","<< u<< endl;


   
    return 0;
}