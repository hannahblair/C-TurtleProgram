#include  "Jump.h"
#include "Command.h"
#include <GL/gl.h>     // The GL Header File
#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header


// Destructor
Jump::~Jump() {

}

void Jump::Run() {
    glBegin(GL_LINE_LOOP);
    glTranslatef(0,-v,0);
    glEnd();
}
/*
 * The Jump command works by
 * using the glTranslate statement
 * which obtained its value from the float v
 * passed by the Command class
 */
