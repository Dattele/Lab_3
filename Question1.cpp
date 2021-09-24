/*
 * This is the code for Question 1
 * Author: Logan Baumberger
 * Last Modified: 9/23/21 2:50 PM
 */

#include <iostream>
#include <string>

// Function for finding amount of letters in string
// Updated to lower-case or upper-case all letters if user wants to
std::string stringLetters(std::string str, std::string upper) {
	//int count = 0;
	for (int i = 0; i < str.size(); i++) {
		char letter = str[i];
		if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <=		122)) {
			//count++;
			if (upper == "yes") {
				if (letter > 90)
					str[i] = letter - 32;
			}
			if (upper == "no") {
				if (letter < 97)
					str[i] = letter + 32;
			}
		}
	}
	//return count;
	return str;
}

//Function for finding amount of digits in string
int stringDigits(std::string str) {
	int count = 0;
        for (int i = 0; i < str.size(); i++) {
                char letter = str[i];
 		if (letter >= 48 && letter <= 57)
                        count++;
        }
        return count;
}

//Function for returning how many numbers are in string
int stringNumbers(std::string str) {
        int count = 0;
        for (int i = 0; i < str.size(); i++) {
                char letter = str[i];
		if (letter >= 48 && letter <= 57) {
			count++;
			for (int j = i + 1; j < str.size(); j++) {
				char letter2 = str[j];	
				if (letter2 >= 48 && letter2 <= 57)
					i++;
				else
					continue;
			}
		}
				
	}
        return count;
}

//Function for determining if string contains miami
bool stringMiami(std::string str) {
	for (int i = 0; i < str.size() - 5; i++) {
		if (str[i] == 'm') {
			if (str[i + 1] == 'i') {
				if (str[i + 2] == 'a') {
					if (str[i + 3] == 'm') {
						if (str[i + 4] == 'i') {
							return true;
						}
					}
				}
			}
		}
        }
	return false;
}

//Function for printing amount of letters, digits, and words
std::string allThree(std::string str) {
	std::string count;
	int countLetters = 0;
        for (int i = 0; i < str.size(); i++) {
                char letter = str[i];
                if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <=122))
                        countLetters++;
        }
	int countDigits = 0;
        for (int i = 0; i < str.size(); i++) {
                char letter = str[i];
                if (letter >= 48 && letter <= 57)
                        countDigits++;
        }
	int countNumbers = 0;
        for (int i = 0; i < str.size(); i++) {
                char letter = str[i];
                if (letter >= 48 && letter <= 57) {
                        countNumbers++;
                        for (int j = i + 1; j < str.size(); j++) {
                                char letter2 = str[j];
                                if (letter2 >= 48 && letter2 <= 57)
                                        i++;
                                else
                                        continue;
                        }
                }

        }
	
	count = "Number of letters: " + std::to_string(countLetters) + ". Number of digits: ";
	count += std::to_string(countDigits) + ". Amount of numbers: " + std::to_string(countNumbers) + ".";
	return count;
}

int main() {
	std::string str;
	std::string upper;

	std::cout << "Enter string: ";
	std::cin >> str;

	std::cout << "Type in yes if you would like to make every letter uppercase, or type in no if you want every letter lowercase: ";
	std::cin >> upper;

	std::cout << stringLetters(str, upper) << std::endl;
	std::cout << stringDigits(str) << std::endl;
	std::cout << stringNumbers(str) << std::endl;
	std::cout << allThree(str) << std::endl;

	return 0;
}
