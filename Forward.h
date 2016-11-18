#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "Node.h"
#include "Command.h"

class Forward : public Command {
    
    public:
    
    // Constructor
    Forward(){};
	

    
    // Destructor
    ~Forward();    
    // Run
    void Run();
    
};

