/*Jadiha Aruleswaran
21009117
27/09/2022
SYDE 121
Assignment 2.2
*/

#include <iostream>
#include <stdio.h>    
#include <math.h> 
#include <cmath> 

using namespace std;

int main(){
    int num = 0;
    int sum = 0;
    int i;

    // 1st Solution
    for(i=0; i<=100; i++){
        if (i%2!=0){
            num = num + i;
        }
    }
    cout << "The sum of odd integers from 1 to 100 using a loop is: " << num << "\n";

    // 2nd Solution
    sum = (50/2)*(2*1+(50-1)*2); //values plugged in
    cout << "The sum of odd integers from 1 to 100 using the formula is: " << sum;

    return 0;
}