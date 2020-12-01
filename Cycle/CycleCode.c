#include <GL/gl.h>
#include <GL/glut.h>
int r,x,y,p,i;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
 // road view
glColor3ub(183, 62,25);
glBegin(GL_POLYGON);

glVertex2d(-600,-100);
glVertex2d(600,-100);
glVertex2d(600,-600);
glVertex2d(-600,-600);
glEnd();

//upper road green place
glColor3ub(73,207,73);
glBegin(GL_POLYGON);

glVertex2d(-600,-100);
glVertex2d(600,-100);
glVertex2d(600,600);
glVertex2d(-600,600);
glEnd();

// first big wheel.... using mid point circle algorithm.......
x = 0;
r=140;
y = r;
p = 1-r;
 int wx1=-400, wy1=-400;
glColor3ub(0,0,0); // wheel color
glPointSize(10);
glBegin(GL_POINTS);
//glVertex2i(x,y);
while(x<=y){

     if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        p= p+(2*x)+1-(2*y);
    }
 glVertex2i(x+wx1, y+wy1);
 glVertex2i(-x+wx1, y+wy1);
 glVertex2i(x+wx1, -y+wy1);
 glVertex2i(-x+wx1, -y+wy1);
 glVertex2i(y+wy1, x+wx1);
 glVertex2i(-y+wy1, x+wx1);
 glVertex2i(y+wy1, -x+wx1);
 glVertex2i(-y+wy1, -x+wx1);

}
glEnd();

//  first small(inside) wheel.... using mid point circle algorithm.......

x = 0;
r=25;
y = r;
p = 1-r;
 int wx3=-400, wy3=-400;
glColor3ub(0,0,0); // wheel color
glPointSize(2);
glBegin(GL_POINTS);
//glVertex2i(x,y);
while(x<=y){

     if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        p= p+(2*x)+1-(2*y);
    }
 glVertex2i(x+wx3, y+wy3);
 glVertex2i(-x+wx3, y+wy3);
 glVertex2i(x+wx3, -y+wy3);
 glVertex2i(-x+wx3, -y+wy3);
 glVertex2i(y+wy3, x+wx3);
 glVertex2i(-y+wy3, x+wx3);
 glVertex2i(y+wy3, -x+wx3);
 glVertex2i(-y+wy3, -x+wx3);

}
glEnd();


// second big wheel.... using mid point circle algorithm.......

x = 0;
r=140;
y = r;
p = 1-r;
 int wx2=400, wy2=-400;
glColor3ub(0,0,0); // wheel color
glPointSize(10);
glBegin(GL_POINTS);

while(x<=y){

     if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        p= p+(2*x)+1-(2*y);
    }
 glVertex2i(x+wx2, y+wy2);
 glVertex2i(-x+wx2, y+wy2);
 glVertex2i(x+wx2, -y+wy2);
 glVertex2i(-x+wx2, -y+wy2);
 glVertex2i(y+wx2, x+wy2);
 glVertex2i(-y+wx2, x+wy2);
 glVertex2i(y+wx2, -x+wy2);
 glVertex2i(-y+wx2, -x+wy2);

}
glEnd();

// second Small(inside) wheel.... using mid point circle algorithm.......

x = 0;
r=25;
y = r;
p = 1-r;
 int wx4=400, wy4=-400;
glColor3ub(0,0,0); // wheel color
glPointSize(2);
glBegin(GL_POINTS);

while(x<=y){

     if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        p= p+(2*x)+1-(2*y);
    }
 glVertex2i(x+wx4, y+wy4);
 glVertex2i(-x+wx4, y+wy4);
 glVertex2i(x+wx4, -y+wy4);
 glVertex2i(-x+wx4, -y+wy4);
 glVertex2i(y+wx4, x+wy4);
 glVertex2i(-y+wx4, x+wy4);
 glVertex2i(y+wx4, -x+wy4);
 glVertex2i(-y+wx4, -x+wy4);

}
glEnd();

// middle(chain wheel) wheel.... using mid point circle algorithm.......

x = 0;
r=50;
y = r;
p = 1-r;
 int wx5=0, wy5=-400;
glColor3ub(0,0,0); // wheel color
glPointSize(3);
glBegin(GL_POINTS);

while(x<=y){

     if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        p= p+(2*x)+1-(2*y);
    }
 glVertex2i(x+wx5, y+wy5);
 glVertex2i(-x+wx5, y+wy5);
 glVertex2i(x+wx5, -y+wy5);
 glVertex2i(-x+wx5, -y+wy5);
 glVertex2i(y+wx5, x+wy5);
 glVertex2i(-y+wx5, x+wy5);
 glVertex2i(y+wx5, -x+wy5);
 glVertex2i(-y+wx5, -x+wy5);

}
glEnd();

//upper bar
glColor3ub(68,83,207);
glBegin(GL_POLYGON);

glVertex2d(-250,-10);
glVertex2d(250,-10);
glVertex2d(250,10);
glVertex2d(-250,10);
glEnd();

// first wheel bar
 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(-400,-400);
 glVertex2d(-210,120);
 glEnd();

 // second wheel bar
 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(400,-400);
 glVertex2d(210,60);
 glEnd();

  // seat
 glColor3ub(0,0,0);
 glBegin(GL_POLYGON);
 glVertex2d(150,60);
 glVertex2d(270,10);
 glVertex2d(250,85);
 glEnd();

 //upper bar to middle wheel(right)
 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(235,-10);
 glVertex2d(0,-400);
 glEnd();

  //upper bar to middle wheel(left)
 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(-235,-10);
 glVertex2d(0,-400);
 glEnd();


  //middle wheel to right wheel
 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(0,-400);
 glVertex2d(400,-400);
 glEnd();

  //lower chain
 glColor3ub(0,0,0);
 glLineWidth(1);
 glBegin(GL_LINES);
 glVertex2d(0,-450);
 glVertex2d(400,-425);
 glEnd();

  //upper chain
 glColor3ub(0,0,0);
 glLineWidth(1);
 glBegin(GL_LINES);
 glVertex2d(0,-350);
 glVertex2d(400,-375);
 glEnd();

   //paddel
 glColor3ub(0,0,0);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(0,-400);
 glVertex2d(0,-550);
 glEnd();

 //paddel bottom
 glColor3ub(0,0,0);
glBegin(GL_POLYGON);

glVertex2d(20,-540);
glVertex2d(20,-560);
glVertex2d(-20,-560);
glVertex2d(-20,-540);
glEnd();

// control bar
 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(-110,180);
 glVertex2d(-280,60);
 glEnd();

glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(-280,60);
 glVertex2d(-270,30);
 glEnd();

 glColor3ub(68,83,207);
 glLineWidth(6);
 glBegin(GL_LINES);
 glVertex2d(-110,180);
 glVertex2d(-100,150);
 glEnd();

 glColor3ub(0,0,0);
 glLineWidth(8);
 glBegin(GL_LINES);
 glVertex2d(-180,160);
 glVertex2d(-160,140);
 glEnd();


glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-600,600,-600,600);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("By Cycle");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


