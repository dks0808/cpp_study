#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    int xmin, ymin ; 
    int xmax, ymax = 0;
    int x,y;
    cin >> N;
    int arrx[N];
    int arry[N];

    for(int i = 0; i < N ; i++)    
        cin >> arrx[i] >> arry[i];

    for(int i = 0; i < N ; i++)
    {    
        if(arrx[i]>xmax)
            xmax = arrx[i];
        if(arry[i] > ymax)
            ymax =arry[i];
    }
    int colx = xmax;
    int rowy = ymax;
    int arrxy[rowy][colx];

    for(int i = rowy-1 ; i>=0; i--)
    {
        for(int j = 0; j < colx; j++)
            arrxy[i][j] = 
    }


    // array reset and size declear
    
    return 0;
}