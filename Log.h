#pragma once
#include <iostream>

class Log
{
private:
	int m_level = 0;  // 0:error, 1:warning, 2:ordinary
	int m_error = 0;
	int m_warning = 1;
	int m_ordinary = 2;

public:
	// static in class means this variable or function is belonged to the class, not any instance of this class!
	static int s_iTest;




public:


	static void s_function();

	void set_level(int level);
	void error(const char *pMsg);
	void wran(const char* pMsg);
	void ordin(const char* pMsg);



};

