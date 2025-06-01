#include "CMakeProjectOfMuthu.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	int a = 10, b = 20;
	cout << "The sum of a and b is: " << addfunction(a, b) << endl;
	cin.get(); // Wait for user input before closing the console window
	return 0;
}