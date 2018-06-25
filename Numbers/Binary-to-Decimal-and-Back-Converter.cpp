#include<iostream>
#include<string>
#include<math.h>

int main() {
	int option;
	std::cout << "Select Option:" << std::endl;
	std::cout << "1. Binary to Decimal" << std::endl;
	std::cout << "2. Decimal to Binary" << std::endl;
	std::cout << ">: ";
	std::cin >> option;

	if(option == 1) {
		std::string binary;
		std::cout << "Enter your binary number: ";
		std::cin >> binary;
		
		int output = 0;
		for(int i = binary.size()-1; i >= 0; i--) {
			int b = binary.at(i) - 48;
			if(b) {
				output += pow(2, i);
			}
			
		}
		std::cout << binary << " = " << output << std::endl;
	} else {
		double decimal;
		std::cout << "Enter your decimal: ";
		std::cin >> decimal;
		
		int binary_length = 0;
		for(int p = 0; pow(2, p) < decimal; p++) binary_length++;

		double remainder = decimal;
		std::string output = "";
		for(int i = binary_length-1; i >= 0; i--) {
			if(remainder >= pow(2, i)) {
				output += "1";
				remainder -= pow(2, i);
			} else {
				output += "0";
			}
		}

		std::cout << decimal << " = " << output << std::endl;
	}
}
