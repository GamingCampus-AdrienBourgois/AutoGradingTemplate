#pragma once
#include "Exercice.h"

#include "Solution3.h"

/*
 * Exercice 3 : Annuaire
 * Vous avez � disposition un fichier CSV contenant une liste de pr�noms et de noms de famille, avec leur mail, ville et age.
 * Gr�ce � une fonction, vous devez pouvoir r�cup�rer les informations d'une personne en particulier.
 * En input vous aurez alors le pr�nom et le nom de la personne recherch�e. Si la personne n'est pas dans l'annuaire, vous devez retourner une exception.
 */

class Exercice3 : public Exercice<Solution3>
{
public:
	bool ExecuteTest(int _id) override
	{
		switch (_id)
		{
		case 0: return Solution.GetAgeOf("Michael Sanders") == 41;
		case 1: return Solution.GetCityOf("David Zimmerman") == "Lake James";
		case 2: return Solution.GetMailOf("Dr. Todd Douglas") == "amy56@hotmail.com";
		case 3: try
			{
				Solution.GetAgeOf("TracyHebert");
				return false;
			}
			catch (std::exception _exception)
			{
				return true;
			}
		case 4: return Solution.GetCityOf("Mark Thompson") == "South Meghan";
		default: throw std::logic_error("Test not found !");
		}
	}
};
