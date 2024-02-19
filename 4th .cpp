#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{   
    int a, b;
    cout << "enter the number" << endl;
    cin >> a >> b;
    int c[a];
    for(int i = 0; i < a; i++)
    {
        cin >> c[i];
        
    }
    for(int i =0; i<a; i++)
    {
        //if(c[i]<b)
        //{
        cout << c[i];
        //}
        
    }
    

   
    return 0;
}
