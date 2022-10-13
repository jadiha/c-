/*Jadiha Aruleswaran
21009117
27/09/2022
SYDE 121
Assignment 2.3
*/

#include <iostream>
#include <stdio.h>    
#include <math.h> 
#include <cmath> 

using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter a positive non-zero integer: ";
    cin >> a;
    cout << "Enter another positive non-zero integer: ";
    cin >> b;

    if ((a%2==0)&&(b%2==0)){
        cout << "Both integers are even, your sum is: ";
        cout << a+b;
    }
    else if ((a%2!=0) && (b%2!=0)){
        cout << "Both integers are odd, your b value was: ";
        cout << b;
    }
    else {
        cout << "You entered one even and odd integer, your a value was: ";
        cout << a;
    }

    return 0;

}