#include "Symple/RegAlloc/.h"

namespace Symple::RegAlloc
{
	constexpr unsigned int NumRegs = sizeof(Registers) / sizeof(*Registers);

	struct RegManager
	{
		bool FreeRegs[NumRegs] = {};
	};

	RegManager *CreateRegManager()
	{ return new RegManager; }

	void DestroyRegManager(RegManager *This)
	{ delete This; }
}