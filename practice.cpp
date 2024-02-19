#include <iostream>
using namespace std;

int main()
{
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
    return 0;
    
}

