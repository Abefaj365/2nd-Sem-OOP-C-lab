// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

// The comparison is as follows: A < B, A > B, A = B.

// Where A, B are two integer numbers and S refers to the sign between them.

// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

// Output
// Print "Right" if the comparison is true, "Wrong" otherwise.

//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <iostream>
using namespace std;
class result{
    public:
    void display();
};
void result::display(){
    
    int A, B; // Two integer numbers
    char S;   // Comparison symbol ('<', '>', '=')
    
    // Input: A, S, B
    cin >> A >> S >> B;

    // Evaluate the condition and print the result
    if ((S == '<' && A < B) || (S == '>' && A > B) || (S == '=' && A == B)) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
}

int main(){
    result obj;
    obj.display();
}