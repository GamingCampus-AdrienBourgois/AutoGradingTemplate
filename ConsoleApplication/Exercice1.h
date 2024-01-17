#pragma once
#include "Exercice.h"

#include "Solution1.h"

/*
 * Exercice 1 : Sorting vector of numbers
 * Pour cet exercice, vous devez trier un vecteur de nombres. Un appel à la méthode SortNumbers() de votre class doit trier le vecteur numbers.
 * Le vecteur est déjà initialisé avec des nombres aléatoires.
 */

class Exercice1 : public Exercice<Solution1>
{
public:
	bool ExecuteTest(int _id) override
	{
		switch (_id)
		{
		case 0: return TestImplementation({0, 1, 2, 3, 4, 5});
		case 1: return TestImplementation({5, 4, 3, 2, 1, 0});
		case 2: return TestImplementation({});
		case 3: return TestImplementation({-5, -4, 3, 2, -1, 0});
		case 4: return TestImplementation({1});
		default: throw std::logic_error("Test not found !");
		}
	}

	bool TestImplementation(const std::vector<int>& _numbers)
	{
		Solution.numbers = _numbers;
		Solution.SortNumbers();
		return CheckVectorOrder(Solution.numbers);
	}

	bool CheckVectorOrder(const std::vector<int>& _numbers) const
	{
		int vectorSize = static_cast<int>(_numbers.size());
		for (int i = 0; i < vectorSize - 1; i++)
		{
			if (_numbers[i] > _numbers[i + 1])
				return false;
		}
		return true;
	}
};
