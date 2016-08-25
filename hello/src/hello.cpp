#include <iostream>

int foo()
{
	int zero = 0;
	return 1 / zero;
}

int main()
{
	foo();
	std::cout << "Hello, World!\n";
}
