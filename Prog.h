#ifndef __PROG_H__
#define __PROG_H__


#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include "Command.h"
#include "Node.h"
#include <stdlib.h>

using namespace std;

class Prog {

public:

	Prog();
	~Prog();
	void Run();
	friend std::istream& operator>> (std::istream& in, Prog& com);
private:

	std::vector<Node*> listing;

};

#endif
