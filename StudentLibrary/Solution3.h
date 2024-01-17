#pragma once

#include <string>
#include <vector>

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
		std::vector<Person> persons = readCSV("listing.csv");
		auto [personName, age, mail, city] = findPerson(persons, name);
		return mail;
	}

	int GetAgeOf(std::string name)
	{
		std::vector<Person> persons = readCSV("listing.csv");
		auto [personName, age, mail, city] = findPerson(persons, name);
		return age;
	}

	std::string GetCityOf(std::string name)
	{
		std::vector<Person> persons = readCSV("listing.csv");
		auto [personName, age, mail, city] = findPerson(persons, name);
		return city;
	}

	std::vector<Person> readCSV(const std::string& filename) const;

	Person findPerson(const std::vector<Person>& directory, const std::string& fullName) const;
};
