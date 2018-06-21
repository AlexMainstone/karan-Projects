#include<iostream>

int main() {
	int n;

	std::cout << "Enter n for fibonacci sequence: " << std::endl;
	std::cin >> n;
	
	unsigned int f1 = 0;
	unsigned int f2 = 1;
	unsigned int f3;
	std::cout << f1 << ", " << f2;
	for(int i = 0; i < n; i++) {
		f3 = f1 + f2;
		std::cout << f3 << ", ";
		f1 = f2;
		f2 = f3;
	}
}
