#include "Solution3.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>

std::vector<Solution3::Person> Solution3::readCSV(const std::string& filename) const
{
	std::vector<Person> directory;
	std::ifstream file(filename);
	std::string line, cell;
	getline(file, line); // Ignorer l'en-tête

	while (getline(file, line))
	{
		std::istringstream ss(line);
		Person person;
		getline(ss, person.name, ',');
		ss >> person.age;
		ss.ignore(); // Ignorer la virgule
		getline(ss, person.mail, ',');
		getline(ss, person.city, ',');
		directory.push_back(person);
	}
	return directory;
}

Solution3::Person Solution3::findPerson(const std::vector<Person>& directory, const std::string& fullName) const
{
	for (const auto& person : directory)
	{
		if (person.name == fullName)
		{
			return person;
		}
	}
	throw std::runtime_error("Person not found");
}
