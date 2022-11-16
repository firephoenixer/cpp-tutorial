#include <iostream>


// creat a test function, show how to organize functions in c++
void helloWorld()
{
	std::cout << "Hello world!" << std::endl;
	return;
}


void increment(int& m)
{
	m++;
	return;
}


// test reference in cpp
void use_reference()
{
	int i = 0;
	int& n = i;
	n = 1;
	std::cout << "n = Reference of i, value n, i:" << n << ", " << i << std::endl;
	increment(n);
	std::cout << "After increment function, value n, i:" << n << ", " << i << std::endl;
	std::cout << "So reference is just another name of a variable." << std::endl;
	return;
}










