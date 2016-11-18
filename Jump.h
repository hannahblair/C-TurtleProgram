#include <iostream>
#include <sstream>
#include <string>
#include "Command.h"
#include "Node.h"

class Jump : public Command {

    public:
    // Constructor
    Jump(){};


    // Destructor
    ~Jump();
    // Run
    void Run();

};
