// this is main function.
// This file manage the testing of every syntax.
#include <iostream>
#include "tools.h"

int main()
{
    std::cout << "Beginning of a test..." << std::endl;

    // test hello world
    helloWorld();

    // test reference in c++
    use_reference();

    /*  The only difference between struct and class is that 
    *        the members in struct are defaultly public
    *        the members in class are defaultly private.
    *   We usually use struct to organise data structure only.
    *              use class to organise data and programme structure.
    */






    std::cout << "Ending of a test..." << std::endl;
    return 0;
}

