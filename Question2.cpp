/*
 * This is the code for Question 1
 * Author: Logan Baumberger
 * Last Modified: 9/23/21 10:50 PM
 */

#include <iostream>
#include <string>

//Function for swapping two integers using reference
void swap(int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
}

void swapNormal(int *c, int *d) {
	int temp = *d;
	*d = *c;
	*c = temp;
}

int main() {
	int a = 10;
	int b = 2;
	int c = 5;
	int d = 3;
	
	std::cout << a << "," << b << std::endl;
	swap(a, b);
	std::cout << a << "," << b << std::endl;

	std::cout << c << "," << d << std::endl;
        swapNormal(&c, &d);
        std::cout << c << "," << d << std::endl;

	return 0;
}
