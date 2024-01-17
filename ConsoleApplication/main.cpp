#include "Exercice.h"

#ifndef AUTOGRADING
#include "StudentConfiguration.h"
#endif

int main(int argc, char** argv)
{
#ifndef AUTOGRADING

	/*------------------ STUDENT MAIN ------------------*/

	// This is the main function for the student

	// You can use this function to test a specific exercice, for example exercice 1 test 1
	// You can test multiple exercices by calling multiple times the function AutograderRunTest
	ExerciceBase::AutograderRunTest(1, 2);

	/*------------------ STUDENT MAIN ------------------*/

#else
	// Cette ligne permet de lancer les tests pour la moulinette
	return ExerciceBase::AutograderMain(argc, argv);
#endif
}
