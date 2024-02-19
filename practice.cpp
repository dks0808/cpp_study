#include <iostream>
#include <algorithm>
using namespace std;




int main()
{
    int c;
    
    bool ft = true;
    int arr[9];
    int size = (sizeof(arr)/4);
    int Max =0;
    int lo = 0;
    for(int i = 0; i < size; i++)
    {        
        cin >> c;
        arr[i] = c;   
    }
   
    
    // for(int i = 0; i < size; i++)
    // {
    //     for(int x = 0; x < size; x++)
    //         {
    //             if(arr[i] < arr[x])
    //             {
    //                 Max_value = arr[x];
    //                 lo = x+1;

    //             }
    //             else if(arr[i]> arr[x])
    //             {
    //                 Max_value = arr[i];
    //                 lo = i+1;
    //             }
            
    //         }
        
    // }
    for(int i = 0; i <size ; i++ )
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
            lo = i;
        }
    }

    cout << Max << endl << lo+1;
    return 0;
    
}

