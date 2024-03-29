#include <iostream>

using namespace std;
int main(){
    int N;
    cin >> N;
    int arr1[N][2];
    for(int i =0; i< N; i++)
        cin >> arr1[i][0] >> arr1[i][1];
    for(int i =0; i<N; i++){
        for(int j =i+1; j<N; j++){
            if(arr1[i][0] > arr1[j][0]){
                int temp1 = arr1[i][0];
                arr1[i][0] = arr1[j][0];
                arr1[j][0] = temp1;
                int temp2 = arr1[i][1];
                arr1[i][1] = arr1[j][1];
                arr1[j][1] = temp2;
            }
            else if(arr1[i][0]==arr1[j][0] && arr1[i][1] > arr1[j][1]){
                    int temp1 = arr1[i][0];
                    arr1[i][0] = arr1[j][0];
                    arr1[j][0] = temp1;
                    int temp2 = arr1[i][1];
                    arr1[i][1] = arr1[j][1];
                    arr1[j][1] = temp2;
            }
        }
    }
    
    for(int i =0; i <N; i++){
        for(int j =0; j<2; j++)
            cout << arr1[i][j] <<" ";
        cout << endl;
    }
    return 0;
}