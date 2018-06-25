#include<iostream>
#include<vector>

// Every currency denomination 
const double coins[] = {0.01, 0.02, 0.05, 0.10, 0.20, 0.50, 1, 2, 5, 10, 50};
const int arraysize = (sizeof(coins)/sizeof(*coins));

int main() {
	double given;
	std::cout << "Enter the amount given: ";
	std::cin >> given;

	int change[arraysize] = {0};

	for(int i = arraysize-1; i >= 0; i--) {
		while(given >= coins[i]) {
			//Add 1 to change list
			change[i]++;
			//Remove the change from the given
			given -= coins[i];
		}
		if(change[i] != 0) std::cout << "£" << coins[i] << " x " << change[i] << std::endl; 
	}
}
