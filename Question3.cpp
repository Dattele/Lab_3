/*
 * This is the code for Question 1
 * Author: Logan Baumberger
 * Last Modified: 9/23/21 11:20 PM
 */

#include <iostream>
#include <string>

std::string maxMin(int arr[], int length) {
	std::string str = "Display: ";
	for (int i = 1; i < length - 1; i++) {
		if ((arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) || (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]))
			str += std::to_string(i + 1) + ", ";
	}
	return str;
}

int main() {
	int length;

	std::cout << "input length for array (max 20): ";
	std::cin >> length;

	int arr[length];
	for (int i = 0; i < length; i++) {
		std::cout << "enter element " << i << ": ";
		std::cin >> arr[i];
	}

	std::cout << maxMin(arr, length) << std::endl;

	return 0;
}	
