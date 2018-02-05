#include <iostream>

void swap(int v1, int v2) {
	std::cout << v1 << v2 << std::endl;
	int temp = v1;
	v1 = v2;
	v2 = temp;
	//v1 and v2 here are local vars. so it won't be reflected in main function.
	std::cout << v1 << v2 << std::endl;
}
void swap(int * v1, int * v2) {
	int temp;
	temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}
int main(void) {
	int n1 = 10, n2 = 30;
	swap(&n1, &n2);
	std::cout << n1 << ' ' << n2 << std::endl;
	//30 10 
	swap(n1, n2);
	std::cout << n1 << ' ' << n2 << std::endl;
	

	/*char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;
	*/
	return 0;
}

/*
a --> [value 5]
c --> [ address a]
*c means you read c's data as address. 
In this case, *c --> read [address a] as address # --> access value 5

if you do *a, it will read 5 as address # --> find the data that's stored in address 5 stack

&a means you literally return the address itself where you're a is stored in.

*/