#include <iostream>
using namespace std;

int main()
{
   unsigned durations, hours, minutes, seconds;
   cout << "Enter duration time: " ;
   cin >> durations ;
   
   hours = durations/3600;
   minutes = (durations-(hours*3600))/60;
   seconds = durations -(hours*3600)-(minutes*60);
   

   cout << "duration time : " << durations<<" s" <<endl ;
   cout <<  hours<<"h ";
   cout <<  minutes<<"m ";
   cout << seconds<<"s "<<endl;

    return 0;
}