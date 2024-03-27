#include <iostream>
#include <algorithm>
using namespace std;

int logsort(int *arr, int b, int c){
    int pivot, b_temp, c_temp;
    b_temp = b;
    c_temp = c;
    pivot = arr[c];
    while(b<c){
        while(arr[b] >= pivot &(b<c)){
            c--;
        }
        if(b!=c){
            arr[b] = arr[c];
        }
        while(arr[b]<=arr[c])
    }

}


int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i =0; i<N; i++)
        cin >> arr[i];
    logsort();
    for(int i =0; i< N; i++)
        cout << arr[i] << endl;
    return 0;
}