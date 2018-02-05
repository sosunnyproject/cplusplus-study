#include <iostream>

/*Problem.01-1.01*/
int main(void)
{
int num1;
int num2;
int num3;
int num4;
int num5;

std::cout << "Enter first num: ";
std::cin >> num1;

std::cout << "Enter second num: ";
std::cin >> num2;

std::cout << "Enter third num: ";
std::cin >> num3;

std::cout << "Enter fourth num: ";
std::cin >> num4;

std::cout << "Enter fifth num: ";
std::cin >> num5;

int result = num1 + num2 + num3 + num4 + num5;
std::cout << "Added result: " << result;

return 0;
}