#include "Solution2.h"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int Solution2::stringCalculator(const std::string& input) const
{
	std::istringstream iss(input);
	std::vector<int> numbers;
	std::vector<char> operations;
	int number;
	char operation;

	// Extraire les nombres et les opérations
	while (iss >> number)
	{
		numbers.push_back(number);
		if (iss >> operation)
		{
			operations.push_back(operation);
		}
	}

	// Calculer le résultat
	int result = numbers[0];
	for (size_t i = 0; i < operations.size(); ++i)
	{
		switch (operations[i])
		{
		case '+': result += numbers[i + 1];
			break;
		case '-': result -= numbers[i + 1];
			break;
		case '*': result *= numbers[i + 1];
			break;
		default: std::cerr << "Operation non prise en charge";
			return 0;
		}
	}

	return result;
}

int Solution2::Compute(const std::string& input) const
{
	return stringCalculator(input);
}
