#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>



void wyswietl(){
  // kolor t³a - zawartoœæ bufora koloru
  glClearColor( 0.0, 0.0, 1.0, 1.0 );
  // czyszczenie bufora koloru
  glClear( GL_COLOR_BUFFER_BIT );
  int n;

  glBegin( GL_LINE_LOOP );
  n=10; //dziesieciokat foremny
  double PI=3.14, fi, x, y;
  fi = 2*PI/n;
  for(int i=0; i<n; i++){
    x=cos(i*fi);
    y=sin(i*fi);
    glVertex3d(x, y, 0);
  }
  glEnd();


  glFlush();
  // zamiana buforów koloru
  glutSwapBuffers();
}

void Zmianarozmiarow( int width, int height )
{
    // generowanie sceny 3D
    wyswietl();
}



int main( int ile_arg, char * arg[] ){


    glutInit(&ile_arg, arg);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize( 400,400 );
    glutCreateWindow("Maciek"); //Tak nazwałem moje okienko
    glutDisplayFunc( wyswietl );
    glutReshapeFunc( Zmianarozmiarow );

    glutMainLoop();

    return 0;
}
