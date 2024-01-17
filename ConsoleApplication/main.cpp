#include <iostream>
#include <string>

#include "Exercice.h"

#include "CompilationList.h"

#ifdef COMPILE_EXERCICE_EXAMPLE
#include "ExerciceExample.h"
#endif

#ifdef COMPILE_EXERCICE_1
#include "Exercice1.h"
#endif

#ifdef COMPILE_EXERCICE_2
#include "Exercice2.h"
#endif

#ifdef COMPILE_EXERCICE_3
#include "Exercice3.h"
#endif

int main(int argc, char** argv)
{
	if (argc <= 1)
	{
		std::cerr << "No Exercice provided !" << '\n';
		return -1;
	}

	if (argc <= 2)
	{
		std::cerr << "No Test provided !" << '\n';
		return -1;
	}

	int exerciceId = std::stoi(argv[1]);
	int test_id = std::stoi(argv[2]);

	std::cout << "Test : Exercice " << exerciceId << " with test " << test_id << '\n';

	ExerciceBase* exercice = nullptr;

	switch (exerciceId)
	{
#ifdef COMPILE_EXERCICE_EXAMPLE
	case 0:
		{
			exercice = new ExerciceExample();
			break;
		}
#endif
#ifdef COMPILE_EXERCICE_1
	case 1:
		{
			exercice = new Exercice1();
			break;
		}
#endif
#ifdef COMPILE_EXERCICE_2
	case 2:
		{
			exercice = new Exercice2();
			break;
		}
#endif
#ifdef COMPILE_EXERCICE_3
	case 3:
		{
			exercice = new Exercice3();
			break;
		}
#endif
	default: std::cerr << "Exercice not found or not compiled !" << '\n';
		return -1;
	}

	return exercice->Check(test_id);
}
