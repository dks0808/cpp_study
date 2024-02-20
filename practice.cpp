#include <iostream>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int arr[N] ;
    int i, j;
    bool tf = true;
    int count =1;
    for(int i = 0; i < N ; i ++ )
    {
        arr[i] = i + 1;
    }
    while(count <= M)
    {
        cin >> i >> j;
        int temp;
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
        count++;


    }
    for(int i = 0; i < N; i ++)
    {
        cout << arr[i] << " ";
    }        
    return 0;
    
}

