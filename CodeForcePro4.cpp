// For a positive integer n let's define a function f:

// f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

// Your task is to calculate f(n) for a given integer n.

// Input
// The single line contains the positive integer n (1 ≤ n ≤ 1015).

// Output
// Print f(n) in a single line.
//Problem Link : https://codeforces.com/problemset/problem/486/A

#include<iostream>
using namespace std;
class result{
   public:
   void display();
};
void result::display(){
    
    long long n;
    cin >> n;

    long long result = 0;

    // Loop through each number from 1 to n
    for (long long i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            result += i;  // Add if the number is even
        } else {
            result -= i;  // Subtract if the number is odd
        }
    }

    cout << result << endl;

}

main(){
    result obj;
    obj.display();
}
