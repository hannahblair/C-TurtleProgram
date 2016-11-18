#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <iostream>
#include "Node.h"
using namespace std;

class Command : public Node {

public:
	Command(){};
	virtual ~Command();
	friend istream& operator>> (istream& in, Command& com);
protected:
	float v;

};

#endif
