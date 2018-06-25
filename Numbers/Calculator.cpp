#include<iostream>

int main() {
	char op;
	float n1, n2;
	std::cout << "Enter a sum :> ";
	std::cin >> n1 >> op >> n2;

	float out;
	switch(op) {
		case '+': out = n1 + n2;
			  break;
		case '-': out = n1 - n2;
			  break;
		case '*': out = n1 * n2;
			  break;
		case '/': out = n1 / n2;
			  break;
	}

	std::cout << n1 << op << n2 << " = " << out << std::endl;
}
