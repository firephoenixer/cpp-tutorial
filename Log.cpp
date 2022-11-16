#include "Log.h"

int Log::s_iTest = 101;

// static function, dont add static here, allready did it in h file
void Log::s_function()
{
	std::cout << "Log class test. static iTest:" << Log::s_iTest << std::endl;
	return;
}

void Log::set_level(int _level)
{
	m_level = (Log::level)_level;
	return;
}

void Log::error(const char* pMsg)
{
	if (m_level >= Error)
	{
		std::cout <<"[ERROR] " << pMsg << std::endl;
	}
}

void Log::warn(const char* pMsg)
{
	if (m_level >= Warning)
	{
		std::cout << "[WARN] " << pMsg << std::endl;
	}
}

void Log::info(const char* pMsg)
{
	if (m_level >= Info)
	{
		std::cout << "[INFO] " << pMsg << std::endl;
	}
}

