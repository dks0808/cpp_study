#include <iostream>
using namespace std;

int main()
{
   unsigned seconds, hours, minutes;
   cout << "Enter seconds: " ;
   cin >> seconds;
   
   hours = seconds/3600;
   minutes = seconds/60;

   cout << "time : " << seconds<<" s"<<endl;
   cout << "hours : " << hours<<" h"<<endl;
   cout << "minutes : " << minutes<<" m"<<endl;
   cout << "seconds : " << seconds<<" s"<<endl;

    return 0;
}