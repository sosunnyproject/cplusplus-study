#include <iostream>

/*Problem.01-1.02*/
int main(void)
{
	int num;

	std::cout << "Enter first num: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++) {
		std::cout << num*i <<" ";
	}

	return 0;
}