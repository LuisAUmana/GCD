/******************************************************************************

// Created by Luis Umana 801018765

Directions: Enter the two numbers you would like to compute within the same line and seperated with one space. 
            This will give you both your GCD and Linear Combination 

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
 

int GCD(int A, int B){
if (A == 0) // If A is 0 then GCD will become value B.

return B;
 
if (B == 0)// If B is 0, then GCD will become value  A.

 
return A;

return GCD(B%A, A); // The proper GCD can be given back if A and/or B are negative.
 
}

 
int main() {
 
int A;
int B;
cout << "Please enter values of A and B: ";
cin >> A;
cin >> B;

 
cout << "GCD of " << A << " and " << B << " is " << GCD(A,B) << endl;

return 0;


}