#include "Solution3.h"

#include <algorithm>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords()
{
	std::ranges::sort(words, &Solution3::CaseInsensitiveCompare);
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

bool Solution3::CaseInsensitiveCompare(const std::string& a, const std::string& b)
{
	return std::ranges::lexicographical_compare(a, b, [](char first, char second) { return std::tolower(first) < std::tolower(second); });
}

#endif
