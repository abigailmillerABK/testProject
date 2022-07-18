//Written by Abigail Miller for CG Spectrum Challenge

#include <iostream>


float sum(float x, float y, float z) {
	return (x + y + z);
}

float average(float x, float y, float z) {
	float thisSum = sum(x, y, z);
	return (thisSum / 3);
}

float cubed(float x) {
	return (x * x * x);
}

int main() {
	std::cout << "Hello World!\n"
		<< "Enter '0' if you want to compute a sum\n"
		<< "Enter '1' if you want to compute an average\n"
		<< "Enter '2' if you want to compute the cube of a value\n";
	int choice;
	std::cin >> choice;
	int x;
	int y;
	int z;
	switch (choice) {
	case 0:
		std::cout << "\nEnter 3 values\n";
		std::cin >> x;
		std::cin >> y;
		std::cin >> z;
		std::cout << "\nAnswer = " << sum(x,y,z);
		break;
	case 1:
		std::cout << "\nEnter 3 values\n";
		std::cin >> x;
		std::cin >> y;
		std::cin >> z;
		std::cout << "\nAnswer = " << average(x, y, z);
		break;
	case 2:
		std::cout << "\nEnter a value\n";
		std::cin >> x;
		std::cout << "\nAnswer = " << cubed(x);
		break;
	default:
		std::cout << "Invalid input";
		break;
	}
	std::cout << "\nProgram terminated";
}

