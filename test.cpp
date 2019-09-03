// This program calculates
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;
    
    //Get hrs worked
    cout << "How many hrs?";
    cin >> hours;
    //Get hourly pay
    cout << "How much do you pay per hour?";
    cin >> rate;
    //Calculate pay
    pay = hours * rate;
    
    //Display pay
    cout << "You earned $" << pay << endl;
    return 0;
}
