#include <iostream>

/*Problem.1*/
int main(void)
{
	int sales = 0;
	do {
		std::cout << "Enter this month's sales amount: ";
		std::cin >> sales;
		if (sales >= 0) {
			int result = 50 + (sales*0.12);
			std::cout << "This month's payment: " << result << std::endl;
		}
		else {
			std::cout << "End the program.. ";
		}
	} while (sales >= 0);
	return 0;
}
	/*infinte loop..?
		if (sales >= 0) {
			std::cout << "Enter this month's sales amount: ";
			std::cin >> sales;
			int result = 50 + (sales*0.12);
			std::cout << "This month's payment: " << result << std::endl;
			
		}
		else {
			std::cout << "End the program...";
		}
		return 0;
		
}
*/