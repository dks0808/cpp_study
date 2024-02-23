#include <iostream>
#include<string>
using namespace std;

int main()
{
    string n1, n2;
    char temp1, temp2;
    cin >> n1 >> n2;
    temp2 = n2[0];
    n2[0] = n2[2];
    n2[2] = temp2;

    temp1 = n1[0];
    n1[0] = n1[2];
    n1[2] = temp1;
    
    if(n1[0]>n2[0])
    {
        
        cout << n1;
    }
    else if(n1[0]<n2[0])
    {
        
        cout << n2;
    }
    else{
        if(n1[1] > n2[1])
            cout << n1;
        else if(n1[1] < n2[1])
            cout << n2;
        
        else
        {
            if(n1[2] > n2[2] )
                cout << n1;
            else if(n1[2]<n2[2])
                cout << n2;
            else if(n1[2]==n2[2])
                cout<<n1;
        }
    }
    return 0;
}