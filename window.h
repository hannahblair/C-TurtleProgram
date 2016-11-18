#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <GL/gl.h>     // The GL Header File
#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
#include <stdlib.h>

static void draw(void);

class window {
public:
	window(int argc, char** argv);
	~window(){};

	static void reshape(int w,int h); 
	static void keyboard ( unsigned char key, int x, int y );
	static void display();

};

window::window(int argc, char** argv)
{
	glutInit( &argc, argv );
	glShadeModel(GL_SMOOTH);						
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);			
	glEnable(GL_DEPTH_TEST);					
	glDepthFunc(GL_LEQUAL);							
    glEnable(GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE ); 
	glutInitWindowSize  ( 500, 500 ); 
	glutCreateWindow    ( "ODD assignment" ); 
	glutDisplayFunc     ( display );  
	glutReshapeFunc     ( reshape );
	glutKeyboardFunc    ( keyboard );
	glutMainLoop        ( ); 
}

void window::reshape ( int w, int h )
{
  glViewport     ( 0, 0, w, h );
  glMatrixMode   ( GL_PROJECTION );  
  glLoadIdentity ( );               
  if ( h==0 ) 
     gluPerspective ( 80, ( float ) w, 1.0, 5000.0 );
  else
     gluPerspective ( 80, ( float ) w / ( float ) h, 1.0, 5000.0 );
  glMatrixMode   ( GL_MODELVIEW ); 
  glLoadIdentity ( );  
}

void window::keyboard( unsigned char key, int x, int y )  
{
  switch ( key ) {
    case 27:      
      exit ( 0 );  
      break;      
    default:      
      break;
  }
}

void window::display()
{
	glLoadIdentity();
	glTranslatef(0.0f,0.0f,-6.0f);
	glColor3f(1,1,1);	
	draw();
	glutSwapBuffers ( );
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

#endif /* __WINDOW_H__ */
