#include <iostream>
#include <sstream>
#include <string>
#include "Command.h"
#include "Node.h"

class RightR : public Command {

    public:
    // Constructor
    RightR(){};

    // Destructor
    ~RightR();
    // Run
    void Run();
    friend istream& operator>> (istream& in, Command& com);
    
};
