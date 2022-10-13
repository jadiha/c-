/*Jadiha Aruleswaran
21009117
27/09/2022
SYDE 121
Assignment 2.1
*/


#include <iostream>
#include <stdio.h>    
#include <math.h> 
#include <cmath> 

using namespace std;

int main(){

int n;
double r;
double guess = n/2;
double prev_guess = n;

cout << "Enter a positive number: ";
cin >> n;

//method 1
while ((prev_guess - guess)/guess > 0.005){
    prev_guess = guess;
    r = n/guess;
    guess = (guess +r)/2;
}
cout << "Using Babylonian Algorithm, the answer is: " << guess << ".\n";

//method 2
cout << "Using Sqaure Root Function, the answer is: " << sqrt(n) << ".\n";

return 0;

}