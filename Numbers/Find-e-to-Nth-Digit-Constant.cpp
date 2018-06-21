#include<iostream>
#include<string.h>

int main() {
	int n = 0;
	const char *E = "7182818284590452353602874713527";
	do {
		std::cout << "Enter n for decimal points of e (less than " << strlen(E)-2 << "): " << std::endl;
		std::cin >> n;
	} while(n > strlen(E)-2);
	
	std::cout << "2" + (n > 0)?  "." : "";

	for(int i = 0; i < n; i++) {
		std::cout << E[i];
	}
}
