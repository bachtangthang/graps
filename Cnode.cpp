#include "Cnode.h"
Cnode::Cnode()
{
}
Cnode::~Cnode()
{
}

void Cnode::fstick(Cnode* x)
{
	if (p1 == NULL)
	{
		p1 = x;
	}
	else if (p2 == NULL)
	{
		p2 = x;
	}
	else
	{
		p2 = NULL;
	}
}
