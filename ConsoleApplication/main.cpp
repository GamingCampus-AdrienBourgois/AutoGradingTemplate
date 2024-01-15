#include <iostream>

#include "Checker.h"

int main(int argc, char** argv)
{
	if(argc <= 1)
	{
		std::cout << "No parameter" << "!\n";
	}
	else
	{
		
		if(strcmp(argv[1],"a") == 0)
		{
			Checker::Expect(true, "Parameter is A");
		}
		else if(strcmp(argv[1],"b") == 0)
		{
			Checker::Expect(false, "Parameter is B");
		}
		else
		{
			Checker::Expect(false, "Parameter is not A or B");
		}
	}

	return 0;
}
