#pragma once

#include <string>

class Solution3
{
public:
	class Person
	{
	public:
		std::string name;
		int age;
		std::string mail;
		std::string city;
	};

	std::string GetMailOf(std::string name)
	{
		return "Unknown";
	}

	int GetAgeOf(std::string name)
	{
		return 0;
	}

	std::string GetCityOf(std::string name)
	{
		return "Unknown";
	}
};
