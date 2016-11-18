#include "Prog.h"
#include "Command.h"
#include "Forward.h"
#include "Repeat.h"
#include "Jump.h"
#include "RightR.h"
#include "LeftR.h"
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

	
//Constructor	
Prog::Prog()
{ 
}
//Deconstructor
Prog::~Prog()
{ 
}

void Prog::Run()
{ 

cout << "RUN is executed" << endl; 

// This for loop runs all of the commands that are stored in the vector
for (int i=0; i<listing.size(); i++){
	listing.at(i) -> Run();	
}

}

istream& operator>> (istream& toread, Prog& com) {

// Check to make sure its open
	if (toread==NULL){
		cerr << "cant open file" << endl;
		exit(1);
	}
	
	string lastCom; //last command for use 

    while (!toread.eof()) //read a line at once until file end
    {
 
        toread >> lastCom;
            cout << "last com" << lastCom << endl;
	
		if (lastCom == "FORWARD") { //if FORWARD is the last command read, then it pushes the value into a node 
			Forward* f = new Forward; //which is then passsed into the Forward class so the program how many forwards to execute
			toread >> (*f);
        com.listing.push_back( (Node*) f );
		}	// The JUMP, RIGHT and LEFT commands work on the same principle as FORWARD above
		if (lastCom == "JUMP"){
		Jump* j = new Jump;
			toread >> (*j);
        com.listing.push_back( (Node*) j );
		}
		if (lastCom == "RIGHT"){
		RightR* ri = new RightR;
			toread >> (*ri);
        com.listing.push_back( (Node*) ri );
		}
		if (lastCom == "LEFT"){
		LeftR* l = new LeftR;
			toread >> (*l);
        com.listing.push_back( (Node*) l );
		}
		if (lastCom == "REPEAT"){ //REPEAT is explained in Repeat.cpp has its function differs from the other commands
			Repeat* r = new Repeat;
			toread >> (*r); 
		com.listing.push_back((Node*)r);
		}
		else if (toread.eof()){ //to check if there are no more commands and has successful reached the end of the file
             cerr << "File has no readable commands left to execute" << endl;
		 }
        }
		


return toread;

}


