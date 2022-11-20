#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <memory>  // use smart pointer 

// static here means this variable can only seen in this file.
static int iNum;

// create a class just for code learn test
class TestClass
{
public:
	TestClass()
	{
		std::cout << "Construction of TestClass invoked." << std::endl;
	}
	~TestClass()
	{
		std::cout << "Destruction of TestClass  invoked." << std::endl;
	}
};

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


// test Ternary operator in cpp
void test_ternary()
{
	int m = 5, n = 8, c = 3;
	int i;

	i = c < n ? m : n;  // if condition true , get front one , or last one
	std::cout << "i = c < n ? m : n;  i = " << i << std::endl;  // 5

}


// test smart pointers
void test_smart_pointers()
{
	std::cout << "Test of smart pointer beginning ... ...  " << std::endl;  
	std::unique_ptr<int> uniPtr1 = std::make_unique<int>(25);
	std::cout << "uniPtr1 = " << uniPtr1 << ", *uniPtr1 = " << *uniPtr1 << std::endl;  
	std::unique_ptr<int> uniPtr2 = std::move(uniPtr1);  // We mustn't use uniPtr1 any more!
	std::cout << "uniPtr2 = " << uniPtr2 << ", *uniPtr2 = " << *uniPtr2 << std::endl;

	// test share pointer, when all the share pointers gone then the instance will be killed and free the space auto. 
	std::shared_ptr<TestClass> shPtr1(new TestClass());
	std::cout << "shPtr1 count = " << shPtr1.use_count() << std::endl;
	std::shared_ptr<TestClass> shPtr2 = shPtr1;
	std::cout << "shPtr1 count = " << shPtr1.use_count() << std::endl;

	// test weak pointer
	std::weak_ptr<TestClass> wePtr;
	wePtr = shPtr1;
	std::cout << "shPtr1 count = " << shPtr1.use_count() << std::endl;  // still 2, weak pointer won't add count
	// so weak pointer used for muli times occation.


	std::cout << "Test of smart pointer ended     ... ...  " << std::endl;  

}
















