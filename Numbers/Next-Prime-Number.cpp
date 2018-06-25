#include<iostream>
#include<string>

int main() {
	int currentPrime = 2;
	while(true) {
		std::string c;
		std::cout << "Press ENTER for next prime or type q to quit:" << std::endl;
		std::getline(std::cin, c);
		// if quit
		if(c == "q") return 1;
		
		std::cout << currentPrime << std::endl;	

		bool primefound = false;
		while(!primefound) {
			currentPrime++;
			bool prime = true;
			for(int j = 2; j <= currentPrime/2; ++j) {
				if(currentPrime % j == 0) {
					//number is not a prime
					prime = false;
				}
			}
			if(prime) {
				primefound = true;
			}
		}
	}

}
