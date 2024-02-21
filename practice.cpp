#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int arr[a] ;
    int count = 0;
    for(int i = 0; i < a; i++)
    {
        int p;
        cin >> p;
        int a = p%42;
        arr[i] = a;
    }

    for(int i = 0; i < a; i++)
    {
        for(int x =0; x <a; x++)
        {
            if(arr[i]<arr[x])
            {
                int temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
    }
    for(int i = 0; i <a; i++)
    {
        if(arr[i] != arr[i+1])
            count ++;
    }
    cout <<  count;

    for(int i = 0; i <a; i++)
        cout << arr[i];
        
    return 0;
    
}

