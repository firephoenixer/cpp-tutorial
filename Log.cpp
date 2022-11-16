#include "Log.h"

int Log::s_iTest = 101;

// static function, dont add static here, allready did it in h file
void Log::s_function()
{
	std::cout << "Log class test. static iTest:" << Log::s_iTest << std::endl;
	return;
}

void Log::set_level(int level)
{
	m_level = level;
	return;
}

void Log::error(const char* pMsg)
{
	if (m_level >= m_error)
	{
		std::cout <<"[ERROR] " << pMsg << std::endl;
	}
}

void Log::wran(const char* pMsg)
{
	if (m_level >= m_warning)
	{
		std::cout << "[WARN] " << pMsg << std::endl;
	}
}

void Log::ordin(const char* pMsg)
{
	if (m_level >= m_ordinary)
	{
		std::cout << "[ORDIN] " << pMsg << std::endl;
	}
}

