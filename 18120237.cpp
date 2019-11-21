#include "Cnode.h"
void main()
{
	Cnode a, b, c, d, e, f;
	a.fstick(&b);
	a.fstick(&d);
	a.fstick(&f);
	b.fstick(&a);
	b.fstick(&d);
	b.fstick(&c);
	c.fstick(&b);
	c.fstick(&d);
	d.fstick(&c);
	d.fstick(&b);
	d.fstick(&a);
	e.fstick(&d);
	e.fstick(&f);
	f.fstick(&e);
	f.fstick(&d);
	f.fstick(&a);
}