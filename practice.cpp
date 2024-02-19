#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    int cap[a];
    for(int i = 0; i <a ; i ++)
    {
        cin >> c;
        cap[i] = c;
    }
    for(int i = 0; i < a; i++)
    {
        if(cap[i]<b)
        {
            cout << cap[i] << " ";
        }
    }
}

