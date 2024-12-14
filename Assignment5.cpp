/* Jadiha Aruleswaran
21009117
20/09/2022
SYDE 121
Assignment 5
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>


using namespace std; 


int main(){

    ifstream input_5;

    double arr [8];
    double sum = 0;
    double power_2;
    double average;

    input_5.open("input5.txt");

    input_5 >> arr[0];
    input_5 >> arr[1];
    input_5 >> arr[2];
    input_5 >> arr[3];
    input_5 >> arr[4];
    input_5 >> arr[5];
    input_5 >> arr[6];
    input_5 >> arr[7];

    cout << "x  x^2  current sum \n";
    cout << "== ===  =========== \n";

    for (int i = 0; i<8; i++){
        sum += arr[i];
        power_2= pow(arr[i],2);

        cout <<"\t"<< arr[i] <<"\t"<<power_2<<"\t"<<sum<<"\n";
    }

    average = (sum/8);
    cout << "The average of the 8 numbers listed is " << average;


    return 0;
}