#ifndef __CNODE_H__
#define __CNODE_H__
#include <iostream>
using namespace std;
class Cnode
{
public:
	char MaNode;
	int data;
	Cnode* p1 = NULL;
	Cnode* p2 = NULL;
	Cnode* p3 = NULL;
	Cnode();
	~Cnode();
	void fstick(Cnode* x);
};
#endif
