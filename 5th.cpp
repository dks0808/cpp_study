#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int score;
    double mean;
    int counter;
    int sum = 0;
    cout << "Enter the how may subjects: " ;
    cin >> n;
    
    while(counter<=n)
    {
        cout << "Enter the score: " ;
        cin >> score;
        if(score >= 0)
        {
            sum = sum + score;
            counter++;
        }
        else
        {
            cout << "score only 0~100 try again" << endl;
        }


    }
    mean = static_cast<double>(sum)/counter;
    cout << fixed << setprecision(3) << showpoint;
    cout << "Your score averge : " << mean ;

    return 0;

}