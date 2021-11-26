// Pointers Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Prepared by : Abdirahman Gedi
                 137748
				 
				 Pointer Exercise*/

#include <iostream>

using namespace std;

int main()
{
	double number1, number2; // Declare double variables called number1 and number2

	number1 = 7.3; // Initialize number1 to 7.3

	double *ptr; // Declare a double variable called ptr
	
	ptr = &number1; // Assign to pointer variable ptr the address of variable number1

	cout << "The value of the object pointed to by ptr: "; cout << ptr; // print the value of the object pointed to by ptr

	cout << endl;

	number2 = *ptr; // Assign to variable number2 the value of the object pointed to by ptr

	cout << "Print the address of variable number1: "; cout << number2; // Print the address stored in ptr.
	// Yes! the value printed here is the same as the address of the number...

	cout << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
