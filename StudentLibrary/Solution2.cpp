#include "Solution2.h"

#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	float balance = 0.0f;

	std::string fileName = "BankAccount/" + accountName + ".txt";

	std::ifstream file(fileName);
	std::string line;

	if (!file.is_open())
	{
		throw std::exception("Could not open the file.");
	}

	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string operation;
		float amount;

		if (!(iss >> operation >> amount))
		{
			std::cerr << "Error: Invalid operation format." << std::endl;
			continue; // Skip invalid lines
		}

		if (operation == "DEPOSIT")
		{
			balance += amount;
		}
		else if (operation == "WITHDRAW")
		{
			balance -= amount;
		}
		else
		{
			std::cerr << "Error: Unknown operation '" << operation << "'." << std::endl;
		}
	}

	file.close();
	return balance;
}

#endif
