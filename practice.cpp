#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
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
=======
    int N, M;
    bool tf = true;
    int i,j,k;
    cin >> N >> M;
    int arr[N];
    int count = 1;
    for(int i = 0; i < N; i++)
        arr[i]=0;
    while(count <= M)
    {
        cin >> i >> j >> k;
        for(int x = i-1; x <=j-1; x++)
            arr[x] = k;
        count++;
    }
    for(int i =0; i<N; i++)
        cout << arr[i] <<" ";
>>>>>>> 6c6f2f1ee38af32e56fa0b5de8a978ace094f5ad
    return 0;
    
}

