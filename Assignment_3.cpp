/*Jadiha Aruleswaran
21009117
06/10/2022
SYDE 121
Assignment 3
*/

#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159; // This variable is defined globally, known to all functions in this program as PI
const double conversion = 0.3937; // This is the Cm to inch conversion factor
double area(double r, double h);
double total_area_cylinder(double r);
double volume(double r, double h);
double volume(double r);
double area(double r);

int main(void)
{
double h, r, num; 

cout << "Welcome, please choose 1 for Cylinder and 2 for Sphere: ";
cin >> num;

if (num == 1){
cout << "\n--You have chosen Cylinder--\n";
cout << "Enter the radius and the height of the Cylinder in Cm: ";
cin >> r >> h;
cout << "\nThe side area of the cylinder is: " << area(r, h) << " inches.\n";
cout<< "The total area of the cylinder is: " << total_area_cylinder(r) + area(r,h)<< " inches.\n";
cout << "The volume of the cylinder is: " << volume(r, h)<< " inches.\n";
}

else if(num == 2){
cout << "\n--You have chosen Sphere-- \n";
cout << "Enter the radius of the Sphere in Cm: ";
cin >> r;
cout << "The volume of the sphere is: " << volume(r) << " inches.\n";
cout << "The area of the sphere is: " << area(r) << " inches.\n";
}

else {
cout << "Invalid Entry :(";
}

return 0;

}

//cylinder
double area(double r, double h) //overload
{
    h = h * conversion; // converting h to inch
    r = r * conversion; // converting r to inch
    return (2*PI*r*h);
}

double total_area_cylinder(double r)
{
    r = r * conversion; // converting r to inch
    return (2*PI*pow(r,2)); 
}

double volume(double r, double h){ //overload
    h = h * conversion; // converting h to inch
    r = r * conversion; // converting r to inch 
    return (PI*pow(r,2)*h);
}

//sphere
double volume(double r){ //overload
    r = r * conversion; // converting r to inch
    return (4*PI*pow(r,2));
}

double area(double r){ //overload
    r = r * conversion; // converting r to inch
    return((4.0/3.0)*PI*pow(r,3));
}




