#pragma once
#include <iostream>

class Log
{
private:
	// enum seems make a new type of variable, make programme structure more logical.
	enum level: int
	{
		Error = 0, Warning, Info
	};
	level m_level = Error;  // 0:error, 1:warning, 2:ordinary

	

public:
	// static in class means this variable or function is belonged to the class, not any instance of this class!
	static int s_iTest;




public:


	static void s_function();

	void set_level(int level);
	void error(const char *pMsg);
	void warn(const char* pMsg);
	void info(const char* pMsg);



};

