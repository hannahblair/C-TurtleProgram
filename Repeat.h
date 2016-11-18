#include <iostream>
#include <sstream>
#include <string>
#include "Command.h"
#include "Node.h"
#include "Prog.h"

using namespace std;

class Repeat : public Command {

public:

	Repeat();
	~Repeat();
	void Run();
	friend istream& operator>> (istream& in, Repeat& r);
	Prog pg;
};
