#pragma once

#include <string>

class Checker
{
public:
	static void Expect(bool condition, const std::string& message = "Error")
	{
		if(!condition)
		{
			throw std::exception(message.c_str());
		}
	}
};
