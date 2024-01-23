/*Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.*/

#include<iostream>

using namespace std;

int main(){
	float Gallons;
	cout << "Enter the value in gallons: ";
	cin >> Gallons;
	cout << "Value in cubic feet: " << (Gallons/7.481) << endl;
	return 0;
}