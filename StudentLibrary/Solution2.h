#pragma once

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include <string>

#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

class Solution2 // Bank Account
{
public:
	static float GetBalance(const std::string& accountName);
};

#endif
