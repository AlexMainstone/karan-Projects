#include<iostream>

int main() {
	float cost;
	float w, h;

	std::cout << "Keep your units consistent!" << std::endl;
	
	// Prompt the user for inputs
	std::cout << "Enter the cost per unit of tile: ";
	std::cin >> cost;
	std::cout << "Enter the width of the floor: ";
	std::cin >> w;
	std::cout << "Enter the height of the floor: ";
	std::cin >> h;

	// Output!
	std::cout << (w * h) * cost << std::endl;
}
