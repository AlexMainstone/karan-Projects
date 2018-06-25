#include<iostream>
#include<math.h>

int main() {
	float mortgage;
	float months;
	float interest;

	std::cout << "Enter the total of borrowed money: ";
	std::cin >> mortgage;
	
	std::cout << "Enter the number of months it will take to pay off the mortgage: ";
	std::cin >> months;

	std::cout << "Enter the interest of your mortgage (int as a percent): ";
	std::cin >> interest;
	
	float rate = (interest / 100) / 12;
	float payment = (rate / (1 - pow(rate + 1, -months))) * mortgage;

	std::cout << "Monthly payment: " << payment << std::endl;
}
