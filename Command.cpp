#include "Command.h"


// Destructor

Command::~Command() {
}


std::istream& operator>> (istream& in, Command& com){

	in >> com.v;
	
	return in;



}
