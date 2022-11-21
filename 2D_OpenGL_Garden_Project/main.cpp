#include<math.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>

void display();
void reshape(int w,int h);
void timer(int);
//initialize the positions of x and y for animation
float x_position = -14.0;
float x_position1  = -5.0;
float x_position2 = 3.0;
float y_poistion = 4.5;
float y_chickarms =-6.1;
void init()
{
glClearColor(73.0/255.0,146.0/255.0,255.0/255.0,0.0);

}

void display(){
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   glLineWidth(3.0);
   double radius;
//Rowan Sherif part
/********************************************************************************************************************************************/
//the garden
   glPushMatrix();
   glBegin(GL_QUADS);
   glColor3ub(140,208,122);
   glVertex2f(-15,-8);
   glVertex2f(15,-8);
   glVertex2f(15,-10);
   glVertex2f(-15,-10);
   glEnd();
   glPopMatrix();

//tree trunk
   glBegin(GL_QUADS);
   glColor3ub(139 ,69 ,19);
   glVertex2f(8.5,-1);
   glVertex2f(10,-1);
   glVertex2f(10,-8);
   glVertex2f(8.5,-8);
   glEnd();



/*tree leaves*/
   glPushMatrix();
   glTranslated(7.5,-1,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(8.5,-1,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(10,-1,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(11,-1,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(8,0.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslated(9,0.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslated(10.5,0.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(9.25,1,0);
   glBegin(GL_POLYGON);
   glColor3ub(0, 139 ,0);
   radius=1.0;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


/*tree leaves*/

/*the chick*/

   /*chick body*/
   glPushMatrix();
   glTranslated(3,-6.25,0);
   glBegin(GL_POLYGON);
   glColor3ub(238 ,180, 34);
   radius=1.5;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(3,-4.9,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180, 34);
   radius=1.2;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();
   /*check body*/

   /*check eyes*/
   glPushMatrix();
   glTranslated(2.6,-4.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   radius=0.1;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslated(3.5,-4.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   radius=0.1;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   /*chick eyes*/

   /*chick legs*/

  glPushMatrix();
   glTranslated(2.3,-7.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180, 34);
   radius=0.5;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslated(3.7,-7.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180, 34);
   radius=0.5;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)*radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   /*chick legs*/
   /*chick mouth*/
    glPushMatrix();
   glTranslated(3,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 127, 0);
   radius=0.5;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,0.25*sin(angle));}
   glEnd();
   glPopMatrix();

   /*chick mouth*/

   /*chick arms*/
   glPushMatrix();
    glTranslated(4.44,y_chickarms,0);
   glRotated(60,-6.5,2,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180, 34);
    radius=0.7;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* 0.35,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslated(1.67,y_chickarms,0);
   glRotated(220,-6.5,2,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180, 34);
   radius=0.7;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* 0.35,radius*sin(angle));}
   glEnd();
   glPopMatrix();





   /*chick arms*/

/*the chick*/


// the sun
   glPushMatrix();
   glTranslated(12,7.5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255,215,0);
   radius = 1.5;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


//flowers
   glBegin(GL_LINES);
   glColor3ub(0, 139 ,0);
   glVertex2f(7.8,-5.3);
   glVertex2f(7.8,-8);

   glVertex2f(11,-5.3);
   glVertex2f(11,-8);

   glVertex2f(6,-5.3);
   glVertex2f(6,-8);

   glVertex2f(13,-5.3);
   glVertex2f(13,-8);



   glEnd();



   glPushMatrix();
   glTranslated(7.5,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 105, 180);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(8.1,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 105, 180);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslated(7.5,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 105, 180);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


    glPushMatrix();
   glTranslated(8.1,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 105, 180);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


    glPushMatrix();
   glTranslated(7.8,-5.3,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180 ,34);
   radius = 0.25;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();






   ///////

    glPushMatrix();
   glTranslated(10.7,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(255 ,0 ,0);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(11.3,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(255 ,0 ,0);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(10.7,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255 ,0 ,0);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(11.3,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255 ,0 ,0);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();






    glPushMatrix();
   glTranslated(11,-5.3,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180 ,34);
   radius = 0.25;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   ///////

   glPushMatrix();
   glTranslated(6.3,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 192, 203);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslated(5.7,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 192, 203);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslated(5.7,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 192, 203);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslated(6.3,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(255, 192, 203);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(6,-5.3,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180 ,34);
   radius = 0.25;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

////////


   glPushMatrix();
   glTranslated(13.3,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(180, 82, 205);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(12.7,-5.6,0);
   glBegin(GL_POLYGON);
   glColor3ub(180, 82, 205);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



   glPushMatrix();
   glTranslated(12.7,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(180, 82, 205);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslated(13.3,-5,0);
   glBegin(GL_POLYGON);
   glColor3ub(180, 82, 205);
   radius = 0.30;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();



     glPushMatrix();
   glTranslated(13,-5.3,0);
   glBegin(GL_POLYGON);
   glColor3ub(238, 180 ,34);
   radius = 0.25;
   for(int i=0;i < 360;i++){
   double angle = i * 3.14 / 180;
   glVertex2d(cos(angle)* radius,radius*sin(angle));}
   glEnd();
   glPopMatrix();

/********************************************************************************************************************************************/
//yasmine part
//The Grass
glBegin(GL_QUADS);
glColor3ub(140,208,122);
glVertex2f(-15,-8);
glVertex2f(15,-8);
glVertex2f(15,-10);
glVertex2f(-15,-10);
glEnd();


//Chimney of the house
glPushMatrix();
glBegin(GL_QUADS);
glColor3ub(139,35,35);
glVertex2f(-9.5,6);
glVertex2f(-9,6);
glVertex2f(-9,4);
glVertex2f(-9.5,4);
glEnd();
glPopMatrix();

//Roof of the house
glBegin(GL_TRIANGLES);
glColor3ub(228,153,78);
glVertex2f(-7.3,7);
glVertex2f(-11.6,3);
glVertex2f(-3,3);
glEnd();

//lines for roof
//lower line
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-10.5,4);
glVertex2f(-4.1,4);
glEnd();

//middle line
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-9.5,5);
glVertex2f(-5.2,5);
glEnd();

//upper line
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-8.4,6);
glVertex2f(-6.2,6);
glEnd();

//middle
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-7.3,7);
glVertex2f(-7.3,3);
glEnd();
//right line
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-5,3);
glVertex2f(-5,4.9);
glEnd();
//left line
glBegin(GL_LINES);
glColor3f(0.9999,0.0,0.0);
glVertex2f(-9,3);
glVertex2f(-9,5.3);
glEnd();


//end of lines

//Bubbles of chimney

//first bubble
glPushMatrix();
glTranslated(-9.3,y_poistion,0);
glBegin(GL_POLYGON);
glColor3ub(240,235,255);
radius = 0.25;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2d(radius *cos(angle),radius*sin(angle)+2);
}
glEnd();
glPopMatrix();

//Second bubble
glPushMatrix();
glTranslated(-9.3,y_poistion,0);
glBegin(GL_POLYGON);
glColor3ub(240,235,255);
radius = 0.25;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2d(radius *cos(angle),radius*sin(angle)+3);
}
glEnd();
glPopMatrix();

//End of bubbles of chimney

//Body of the house
glBegin(GL_QUADS);
glColor3ub(128,0,0);
glVertex2f(-3,3);
glVertex2f(-3,-8);
glVertex2f(-11.6,-8);
glVertex2f(-11.6,3);
glEnd();

//Left Window
glBegin(GL_QUADS);
glColor3ub(219,193,168);
glVertex2f(-11,2);
glVertex2f(-9,2);
glVertex2f(-9,0);
glVertex2f(-11,0);
glEnd();

//lines of left window

//Middle line
glPushMatrix();
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-10,2);
glVertex2f(-10,0);
glEnd();
glPopMatrix();

//left line
glPushMatrix();
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-11,1);
glVertex2f(-9,1);
glEnd();
glPopMatrix();
//end of lines

//Right window
glBegin(GL_QUADS);
glColor3ub(219,193,168);
glVertex2f(-6,2);
glVertex2f(-4,2);
glVertex2f(-4,0);
glVertex2f(-6,0);
glEnd();

//lines for right window

//middle line
glPushMatrix();
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-5,2);
glVertex2f(-5,0);
glEnd();
glPopMatrix();

//left line
glPushMatrix();
glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
glVertex2f(-6,1);
glVertex2f(-4,1);
glEnd();
glPopMatrix();
//end of lines

//Door of the house
glBegin(GL_QUADS);
glColor3ub(160,82,45);
glVertex2f(-9,-2);
glVertex2f(-6,-2);
glVertex2f(-6,-8);
glVertex2f(-9,-8);
glEnd();

//Doorknob
glPushMatrix();
glTranslated(-6.5,-5,0);
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 0.1;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2d(radius *cos(angle),radius*sin(angle));
}
glEnd();
glPopMatrix();

//Circles for clouds

//First cloud

//right circle
glPushMatrix();

glTranslated(x_position,8,0);
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+ 3,radius*sin(angle));
}
glEnd();

//middle circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+1.5,radius*sin(angle));
}
glEnd();

//upper cloud
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+1.5,radius*sin(angle)+1);
}
glEnd();

//left circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2d(radius *cos(angle),radius*sin(angle));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+3,radius*sin(angle));
}
glEnd();
glPopMatrix();
//end of first cloud

//second cloud
//circle from right
glPushMatrix();
glTranslated(x_position1,8,0);
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+3,radius*sin(angle));
}
glEnd();


//Upper circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+1.5,radius*sin(angle)+1);
}
glEnd();

//Middle circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+1.5,radius*sin(angle));
}
glEnd();

//Right circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle),radius*sin(angle));
}
glEnd();
glPopMatrix();
//end of second cloud

//third cloud
//right circle
glPushMatrix();
glTranslated(x_position2,8,0);
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+ 3,radius*sin(angle));
}
glEnd();

//middle circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+1.5,radius*sin(angle));
}
glEnd();

//upper circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+1.5,radius*sin(angle)+1);
}
glEnd();

//left circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2d(radius *cos(angle),radius*sin(angle));
}
glEnd();
//right circle
glBegin(GL_POLYGON);
glColor3ub(240,255,255);
radius = 1.0;
for(int i = 0;i < 360;i++){
    double angle = i*3.14/180;
    glVertex2f(radius *cos(angle)+3,radius*sin(angle));
}
glEnd();
glPopMatrix();
//end of third cloud



glFlush();
}



void reshape(int w,int h)
{

   glViewport(0,0,(GLsizei)w,(GLsizei)h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(-15,15,-10,10);
   glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char *argv[])
{
glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);


    glutCreateWindow("Rowan Sherif Mohamed 20102728, Yasmine Karim 20102062 ");

     glutDisplayFunc(display);
     glutReshapeFunc(reshape);
     glutTimerFunc(1000,timer,0);//used for animation


      init();

     glutMainLoop();
}
void timer(int){
    glutPostRedisplay();
    //frame rate will be 33 millisecond FPS
    glutTimerFunc(1000/25,timer,0);

    //unless the position of the object reaches the end of the max x it will keep moving
    if(x_position  || x_position1 || x_position2 < 11){
    x_position += 0.15;
    x_position1 += 0.15;
    x_position2 += 0.15;
    }

    //if it is less than max y
    if(y_poistion < 11)
    //we will increase by this rate
    y_poistion += 0.1;
        else
    //we will start from where we stopped
    y_poistion = 4.5;

    if(y_chickarms < -5.9)
    //we will increase by this rate
    y_chickarms += 0.1;
        else
    //we will start from where we stopped
    y_chickarms = -6.1;

}





