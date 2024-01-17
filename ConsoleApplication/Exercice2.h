#pragma once
#include "Exercice.h"

#include "Solution2.h"

/*
 * Exercice 2 : String Calculator
 * Pour cet exercice, vous devez retourner le résultat de l'opération indiquée dans la chaîne de caractères.
 * Par exemple la string en input "1+2" doit retourner l'int 3.
 * Seuls des ints sont à retourner, et seules les opération +, - et * sont à gérer.
 */

class Exercice2 : public Exercice<Solution2>
{
public:
	bool ExecuteTest(int _id) override
	{
		switch (_id)
		{
		case 0: return Solution.Compute("1+2") == 3;
		case 1: return Solution.Compute("3*5") == 15;
		case 2: return Solution.Compute("150-150") == 3;
		case 3: return Solution.Compute("12*16") == 192;
		case 4: return Solution.Compute("20-40") == -20;
		default: throw std::logic_error("Test not found !");
		}
	}
};
