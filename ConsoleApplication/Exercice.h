#pragma once
#include <exception>
#include <iostream>

class ExerciceBase
{
public:
	static int AutograderMain(int argc, char** argv);
	static int AutograderRunTest(int exerciceId, int testId);

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
			std::cout << "|!| EXCEPTION DURING TEST" << '\n';
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
