// Given a mathematical expression. The expression will be one of the following expressions: A+B
// , A−B
// , A∗B
//  and A/B
// .

// Print the result of the mathematical expression.

// Input
// Only one line contains A,S
//  and B
//  (1≤A,B≤104)
// , S
//  is either (+,−,∗,/)
// .

// Output
// Print the result of the mathematical expression.

//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include<iostream>
using namespace std;
class result{
    public:
    void display();
};

void result::display(){
    
    double A, B;
    char S;

    // Read the input in the form of A, S, and B
    cin >> A >> S >> B;

    // Perform the operation based on the operator S
    switch (S) {
        case '+':
            cout << A + B << endl;
            break;
        case '-':
            cout << A - B << endl;
            break;
        case '*':
            cout << A * B << endl;
            break;
        case '/':
            cout << A / B << endl; 
        default:
            cerr << "Invalid operator" << endl;
    }
}

int main(){
    result obj;
    obj.display();
}