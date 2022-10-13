/* Jadiha Aruleswaran
21009117
20/09/2022
SYDE 121
Assignment 1.1
*/

#include <iostream>
using namespace std;

int main(){
    string name;
    int student_id;

    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your Student ID?: ";
    cin >> student_id;

    cout << "Hello World from " << name << " with Student ID " << student_id << ".";
    return 0;
}