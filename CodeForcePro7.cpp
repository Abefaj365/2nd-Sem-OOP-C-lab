// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
// Input
// Only one line containing a character X which will be a capital or small letter or digit.

// Output
// Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include<iostream>
using namespace std;
class result{
    public:
    void display();
};
void result::display(){
    char X; // Input character
    cin >> X;

    if (X >= '0' && X <= '9') { // Check if the character is a digit
        cout << "IS DIGIT" << endl;
    } else if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')) { // Check if it's an alphabet
        cout << "ALPHA" << endl;
        if (X >= 'A' && X <= 'Z') { // Check if it's a capital letter
            cout << "IS CAPITAL" << endl;
        } else { // Otherwise, it's a small letter
            cout << "IS SMALL" << endl;
        }
    }
}

int main(){
    result obj;
    obj.display();
}