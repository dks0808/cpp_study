#include <iostream>
using namespace std;

int main()
{
    int p ;
    int n = 30;
    int arr[n] = {};
    

    for(int i = 0; i <28; i++)
    {
        cin >> p;
        arr[p-1] = p;
    }
    for(int i = 1; i<=n; i++)
    {
        if(arr[i-1] != i)
            cout << i <<endl;
    }
   

    return 0;
    
}

