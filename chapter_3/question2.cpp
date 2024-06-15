#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int n {};
	std::cin >> n;
	return n;
}

void writeAnswer(int n)
{
	std::cout << "The quotient is: " << n << '\n';
}

int main()
{
	int x{ };
	int y{ };
	x = readNumber();
	y = readNumber();
	writeAnswer(x/y);

	return 0;
}