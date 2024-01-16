#pragma once
#include "Exercice.h"

#include "Solution1.h"

class Exercice1 : public Exercice<Solution1>
{
public:
	bool ExecuteTest(int _id) override
	{
		switch (_id)
		{
		case 0: return Solution1::Sum(1, 2) == 3;
			break;
		case 1: return Solution1::Sum(1, 3) == 4;
			break;
		case 2: return Solution1::Sum(1, 4) == 5;
			break;
		case 3: return Solution1::Sum(1, 5) == 6;
			break;
		case 4: return Solution1::Sum(1, 6) == 7;
			break;
		default: throw std::logic_error("Test not found !");
		}
	}
};
