#include  "Repeat.h"
#include  "Command.h"
#include "Prog.h"


// Constructor
Repeat::Repeat(){

}

// Destructor
Repeat::~Repeat(){

}

istream& operator>> (istream& in, Repeat& r){


	char c;
	in >> r.v >> ws >> c;
	
	
	if(c == '['){
		in >> r.pg;
	}

return in;

}

void Repeat::Run() {

	for (int i = 0; i < v; i++){
	pg.Run();
	cout << "REPEAT";
}

}
