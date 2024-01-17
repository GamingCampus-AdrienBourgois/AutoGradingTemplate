#pragma once
#include <exception>
#include <iostream>

class ExerciceBase
{
public:
	static int MainCheck(int argc, char** argv);

	bool Check(int _testId)
	{
		try
		{
			bool result = ExecuteTest(_testId);

			if (result)
				std::cout << "-> Result Test " << _testId << " : OK\n";
			else
				std::cout << "-> Result Test " << _testId << " : FAILURE\n";

			return result;
		}
		catch (std::exception& _exception)
		{
			std::cout << _exception.what() << '\n';
			return false;
		}
	}

	virtual bool ExecuteTest(int _testId)
	{
		return true;
	}
};

template<typename SolutionType>
class Exercice : public ExerciceBase
{
public:
	SolutionType Solution;
};
