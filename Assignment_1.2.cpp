/* Jadiha Aruleswaran
21009117
20/09/2022
SYDE 121
Assignment 1.2
*/

#include <iostream>
using namespace std;

int main(){

    int fahrenheit_temp;
    cout<<"Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit_temp;

    int centigrade_temp = (fahrenheit_temp - 32.0)/1.8;
    cout<<"The temperature in Centrigrade is: "<<centigrade_temp;

    return 0;
}