#include  "Forward.h"
#include "Command.h"
#include <GL/gl.h>     // The GL Header File
#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header

// Destructor
Forward::~Forward() {
}



void Forward::Run() {
glBegin(GL_LINE_LOOP);
glVertex3f(0.0f, 0.0f, 0.0f);
glVertex3f(0.0f,-v, 0.0f);
glEnd();
glTranslatef(0,-v,0);
}
/* The Forward command works 
 * by setting the difference 
 * between the two Vertex's 
 * and having the actual difference defined by 'v' 
 * which is obtained by Command class
 */
 
