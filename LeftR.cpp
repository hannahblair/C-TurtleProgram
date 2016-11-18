#include  "LeftR.h"
#include "Command.h"
#include <GL/gl.h>     // The GL Header File
#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header


// Destructor
LeftR::~LeftR(){

}

void LeftR::Run(){
 glRotatef(v,0,0,-1);
}
/*
 * The LeftR command works by
 * using the glRotate statement to 
 * rotate the 'pencil' on it's axis
 * which obtained its degree value from the float v
 * passed by the Command class
 */
