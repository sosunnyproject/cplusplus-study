#include <iostream>

int main(void)
{
	int num = 5;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << '  ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
} 

/*
how to run this in windows prompt
- open Developer Command Prompt in VS 2015
- go to the .cpp file directory address (cd ~ dir ~)
- cl /EHsc your-file-name.cpp
- .exe and .obj created
- $ your-file-name
- your .exe file will run and you will see the output
*/
