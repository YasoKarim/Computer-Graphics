/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 *
 ed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

 #include <GL/gl.h>
 #include <GL/glu.h>
 #include <GL/glut.h>
 #include <stdlib.h>
 #include <windows.h>
void display();
void reshape(int w,int h);
void init(){
glClearColor(0.0,0.0,0.0,1.0);
}
void display(){
glClear(GL_COLOR_BUFFER_BIT);//to make sure every color is included in the shape
glLoadIdentity();//position rotation int the angle will multiply in the identity matrix

glLineWidth(10.0);
glBegin(GL_LINES);//we will start from this part
glVertex2f(-3,5);
glVertex2f(-3,0);

glVertex2f(-3,-1);
glVertex2f(-3,-2);

glVertex2f(-1,-2);
glVertex2f(-1,2);

glVertex2f(-3,-2);
glVertex2f(3,-2);

glVertex2f(0,5);
glVertex2f(0,0);

glVertex2f(-3,5);
glVertex2f(3,5);

glVertex2f(3,-0);
glVertex2f(3,5);

glVertex2f(3,-1);
glVertex2f(3,-2);

glVertex2f(2,-2);
glVertex2f(2,2);//will be in the third quad

glEnd();//end of the file
glFlush();//will display the shape

}
void reshape(int w,int h){
glViewport(0,0,(GLsizei)w,(GLsizei)h);//to set the boundaries
glMatrixMode(GL_PROJECTION);
glLoadIdentity();//reshape the size
gluOrtho2D(-10,10,-10,10);//last value will be -10 in x and max is 10
glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(200,200);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_RGB);

    glutCreateWindow("Window 2");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();

}
