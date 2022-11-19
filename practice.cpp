// this is main function.
// This file manage the testing of every syntax.
#include <iostream>
#include "tools.h"
#include "Log.h"
#include "Player.h"


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
    //Log::s_function();
    Log log;
    log.set_level(2);    // 0:error, 1:warning, 2:ordinary
    //log.error("fatal error!");
    //log.warn("may cause a error but not sure.");
    //log.info("have same message to show.");

    // show class feature
    log.info("class test:");
    Player heroEpic("EpicBL");  // seems the string in c++ is different from c
    heroEpic.show_name();

    // test virtual function
    Entity* pEntity;
    pEntity = &heroEpic;
    pEntity->show_message();               // will show "EpicBL", with blood and energy
    pEntity->show_name();                  // not virtual, won't show call times
    Entity houseMarket("Market Hall");     // will show "Market Hall"
    pEntity = &houseMarket;                // so virtual function can call by the essence of object
    pEntity->show_message();               // instead of calling a fixed function
    pEntity->show_name();

    // test string usage
    // test_string();










    std::cout << "Ending of a test..." << std::endl;
    return 0;
}

