#include "Exercice.h"

#ifndef AUTOGRADING
#include "StudentConfiguration.h"
#endif

int main(int argc, char** argv)
{
#ifndef AUTOGRADING
	return StudentMain(argc, argv);
#else
	// Cette ligne permet de lancer les tests pour la moulinette
	return ExerciceBase::MainCheck(argc, argv);
#endif
}
