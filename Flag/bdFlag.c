#include <GL/gl.h>
#include <GL/glut.h>
// global variable ....
float x=0,y,p;
int r;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
glEnd();
glColor3f (1,0, 0);  // set the red color
glBegin(GL_POLYGON);
p = 1-r;

while(x<=y){
    if(p<0){
        x=x+1;
        y=y;
        printf("%0.2f %0.2f\n",x,y);
        p=p+(2*x)+1;
    }
    else{
        x=x+1;
        y=y-1;
        printf("%0.2f %0.2f\n",x,y);
        p= p+(2*x)+1-(2*y);
    }
     glVertex3f (((x/100)), ((y/100)), 0.0);
     glVertex3f (((y/100)), ((x/100)), 0.0);
     glVertex3f ((-(x/100)), (-(y/100)), 0.0);
     glVertex3f ((-(x/100)), ((y/100)), 0.0);
     glVertex3f (((x/100)), (-(y/100)), 0.0);
     glVertex3f (((y/100)), (-(x/100)), 0.0);
     glVertex3f ((-(y/100)), (-(x/100)), 0.0);
     glVertex3f ((-(y/100)), ((x/100)), 0.0);

}

glEnd();
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0,1,0,0);  // set the background color is green(0,1,0,0) or white(1,1,1,1)......
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//gluOrtho2D(0,600,0,600);
}
int main(int argc, char** argv)
{
    printf("Enter radius: ");
    scanf("%d",&r);
    y=r;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("BD Flag");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


