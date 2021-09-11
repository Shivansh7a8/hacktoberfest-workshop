//graphics
#include<iostream>
#include<GL/gl>
#include<GL/glu>
#include<GL/glut>
using namespace std;
int main(int argc,char** argv){
	glutCreatWindow("simple");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	    glVertex2f(-0.5,-0.5);
	    glVertex2f(-0.5,0.5);
	    glVertex2f(0.5,0.5);
	    glVertex2f(0.5,-0.5);
	glEnd();
	glFlush();    
}
