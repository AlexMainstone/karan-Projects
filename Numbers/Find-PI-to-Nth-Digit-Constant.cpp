#include<iostream>
#include<string.h>

int main() {
	int n = 0;
	const char *PI = "14159265358979323846264338327950288419";
	do {
		std::cout << "Enter n for decimal points of pi (less than " << strlen(PI)-2 << "): " << std::endl;
		std::cin >> n;
	} while(n > strlen(PI)-2);
	
	std::cout << "3" + (n > 0)?  "." : "";

	for(int i = 0; i < n; i++) {
		std::cout << PI[i];
	}
}
