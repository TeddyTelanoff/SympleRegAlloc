#include <cstdlib>

#include "Symple/RegAlloc/.h"

int main()
{
	auto regManager = Symple::RegAlloc::CreateRegManager();
	Symple::RegAlloc::DestroyRegManager(regManager);

	std::system("pause");
}