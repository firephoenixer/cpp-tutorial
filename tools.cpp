#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

// static here means this variable can only seen in this file.
static int iNum;

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


// test string in cpp
void test_string()
{
	std::cout << "Now , show some string features in cpp: "  << std::endl;
	int a = 2;
	// use 1 byte to indicate a char,  strExample is a instance of string class
	std::string strExample = "visual studio 2019";
	std::cout << strExample << " --  has a length of " << strExample.length() << std::endl;
	// so the sizeof() get the size of this instance(class), not the size of the "strings".
 	std::cout << strExample << "(class) --  has a size of " << sizeof(strExample) << std::endl;

	// use 2 byte to indicate a char
	std::u16string str16Example = u"visual studio 2019";
	std::cout << "str16Example" << " --  has a length of " << str16Example.length() << std::endl;
	std::cout << "str16Example" << "(class) --  has a size of " << sizeof(str16Example) << std::endl;

	// use 4 byte to indicate a char
	std::u32string str32Example = U"visual studio 2019";
	std::cout << "str32Example" << " --  has a length of " << str16Example.length() << std::endl;
	std::cout << "str32Example" << "(class) --  has a size of " << sizeof(str16Example) << std::endl;

	// don't know why it comes out random text yet! solve it in the future
	std::u32string str = U"abc很有用👍";  // str.size() == 7
	std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
	std::cout << converter.to_bytes(str) << std::endl;
	std::cout << "why come out 乱码？ 很有用👍" << std::endl;

	return;
}







