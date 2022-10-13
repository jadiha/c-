/* Jadiha Aruleswaran
21009117
20/09/2022
SYDE 121
Assignment 1.3
*/

#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Please enter a positive number less than 10: ";
    cin >> number;

    if (number < 5 || number > 10){
        cout << "The number is not in the range. ";
    }

    else {
        cout << "The number is in the range. ";
    }

    return 0;

}

