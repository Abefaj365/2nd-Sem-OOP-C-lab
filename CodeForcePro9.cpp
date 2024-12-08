// Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

// Note: consider the whole year has 365 days and 30 days per month.

// Input
// Only one line containing a number N (0 ≤ N ≤ 106).

// Output
// Print the output, like the following examples.

//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include<iostream>
using namespace std;
class result{
    public:
    void display();
};

void result::display(){
    
    int N; // Number of days as input
    cin >> N;

    // Calculate years, months, and days
    int years = N / 365; // 1 year = 365 days
    N %= 365;
    int months = N / 30; // 1 month = 30 days
    int days = N % 30;

    // Print the result
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

}

int main(){
    result obj;
    obj.display();
}
