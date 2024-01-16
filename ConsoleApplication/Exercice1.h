#pragma once
#include <random>

#include "Exercice.h"

#include "Solution1.h"

class Exercice1 : public Exercice<Solution1>
{
public:
	bool ExecuteTest(int _id) override
	{
		switch (_id)
		{
		case 0: return Solution.isEven(1) == false;
		case 1: return Solution.isEven(2) == true;
		case 2: return Solution.isEven(0) == true;
		case 3: return Solution.isEven(INT_MAX) == false;
		case 4: return Solution.isEven(12589) == false;
		default: throw std::logic_error("Test not found !");
		}
	}
};
