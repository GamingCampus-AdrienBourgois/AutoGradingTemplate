#pragma once
#include <exception>
#include <iostream>

class ExerciceBase
{
public:
	bool Check(int _testId)
	{
		try
		{
			return ExecuteTest(_testId);
		}
		catch (std::exception& _exception)
		{
			std::cerr << _exception.what() << '\n';
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
