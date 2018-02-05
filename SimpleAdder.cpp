#include <iostream>

int main(void)
{
	int val1;
	std::cout << "Enter first num: ";
	std::cin >> val1;

	int val2;
	std::cout << "Enter second num: ";
	std::cin >> val2;
	
	int result = val1 + val2;
	std::cout << "Added result: ";
	std::cout << result << std::endl;
	/*short version:
	std::cout << "Added result: "<<result<<std::endl;*/

	return 0;
}