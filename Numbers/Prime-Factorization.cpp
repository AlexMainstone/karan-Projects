#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number to find the Prime Factors:" << std::endl;
	std::cin >> n;
	
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			//The number is a factor
			bool prime = true;
			if(i == 1) prime = false;
			for(int j = 2; j <= i/2; ++j) {
				if(i % j == 0) {
					//number is not a prime
					prime = false;
				}
			}
			if(prime) {
				std::cout << i << std::endl;
			}
		}
	}
}
