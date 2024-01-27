#include <iostream>

int minites(int s)
{
    int a = s * 60;
    return a;
}
int hours(int s)
{
    int a = minites(s) * 60;
    return a;
}

using namespace std;
int main(){
    int h;
    int m;
    int s3;
    cout << "Enter the hour: " << endl;
    cin >> h;
    cout << "Enter the minites: " << endl;
    cin >> m;
    cout << "Enter the seconds: " << endl;
    cin >> s3;
    
    int s1 = hours(h);
    int s2 = minites(h);
    cout << "The hours: " << s1 << " s"<<endl; 
    cout << "The minites: " << s2 <<" s"<<endl; 
    cout << "The seconds: " << s3<<" s"<<endl; 

    return 0;
}