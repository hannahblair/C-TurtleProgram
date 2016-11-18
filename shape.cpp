// assign1011.cpp : Defines the entry point for the console application.
//

#include "window.h"
#include "Prog.h"
#include <iostream>
#include <fstream>

Prog p;

void draw(void)   
{
	p.Run();
}


int main(int argc, char** argv) 
{
	string input;
	cout << "Please enter a valid filename (with .txt on the end):\n>";
		getline(cin, input);
			cout << "You entered: " << input << endl << endl;
 
 ifstream toread(input.c_str()); 
	toread >> p;
	toread.close();


	window w(argc,argv);  
}
/*This main method enables the window.h file that  
 * presents the executed commands after the makefile_shape is entered
 * then the shape ojbect is called, the terminal will print out the first
 * cout message, allow the user to enter the .txt file name via the cin code 
 * and after entered, it will print the second cout message
 * 
 */

