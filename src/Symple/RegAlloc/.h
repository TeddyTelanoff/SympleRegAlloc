#pragma once

namespace Symple::RegAlloc
{
	struct Register
	{
		const char *Name;
		unsigned int Id;

		operator const char *()
		{ return Name; }

		operator unsigned int()
		{ return Id; }
	};

	constexpr Register Registers[] =
	{
		{ "eax", 0 },
		{ "edx", 1 },
		{ "ebx", 2 },
		{ "ecx", 3 },
	};

	struct Value
	{
		Register Reg;
		unsigned int StackPos;
	};

	struct RegManager;
	RegManager *CreateRegManager();
	void DestroyRegManager(RegManager *);
}