// this is main function.
// This file manage the testing of every syntax.
#include <iostream>
#include "tools.h"
#include "Log.h"

int main()
{
    std::cout << "Beginning of a test..." << std::endl;

    // test hello world
    //helloWorld();

    // test reference in c++
    //use_reference();

    /*  The only difference between struct and class is that 
    *        the members in struct are defaultly public
    *        the members in class are defaultly private.
    *   We usually use struct to organise data structure only.
    *              use class to organise data and programme structure.
    */

    // use Log class as a example of log output in console
    Log log;
    log.set_level(1);    // 0:error, 1:warning, 2:ordinary
    log.error("fatal error!");
    log.wran("may cause a error but not sure.");
    log.ordin("have same message to show.");



    std::cout << "Ending of a test..." << std::endl;
    return 0;
}

