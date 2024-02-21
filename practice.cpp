#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N ;
    int arr[N] ;
    int count ;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        
    }
    int V;
    cin >> V;

    for(int x=0; x<N; x++)
    {
        if(arr[x] == V)
            count ++;  
    }  
    cout <<count;
    return 0;
    
}

