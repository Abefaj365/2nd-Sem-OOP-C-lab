// memory limit per test256 megabytes
// Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

// Note:

// Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
// Print "Origem" If the point is at the origin.
// Print "Eixo X" If the point is over X axis.
// Print "Eixo Y" if the point is over Y axis.

// Input
// Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

// Output
// Print the answer to problem above.

//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

#include<iostream>
using namespace std;
class result{
    public:
    void display();
};

void result::display(){
    
    double X, Y; // Coordinates of the point
    cin >> X >> Y;

    if (X == 0 && Y == 0) { // Check if the point is at the origin
        cout << "Origem" << endl;
    } else if (X == 0) { // Check if the point lies on the Y-axis
        cout << "Eixo Y" << endl;
    } else if (Y == 0) { // Check if the point lies on the X-axis
        cout << "Eixo X" << endl;
    } else if (X > 0 && Y > 0) { // First quadrant
        cout << "Q1" << endl;
    } else if (X < 0 && Y > 0) { // Second quadrant
        cout << "Q2" << endl;
    } else if (X < 0 && Y < 0) { // Third quadrant
        cout << "Q3" << endl;
    } else if (X > 0 && Y < 0) { // Fourth quadrant
        cout << "Q4" << endl;
    }
}

int main(){
    result obj;
    obj.display();
}