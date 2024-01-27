#include <iostream>
using namespace std;

int main()
{

   int a, b, c;
   int sum;
   float mean;
   cout << "Enter the each score 3: "<<endl;
   cin >> a >> b >> c;
   sum = a+b+c;
   mean = sum/3;
   
   cout << "first score is " << a<< endl;
   cout << "second score is "<< b<< endl;
   cout << "third score is "<<c <<endl;
   

   cout << "sum: " << sum << endl;
   cout << fixed << showpoint;
   cout << "mean: " << mean << endl;

    
   
   
    
    return 0;
}