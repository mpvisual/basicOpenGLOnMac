// minimal openGL code. Should run out of the box on a Mac, do not need third party libraries.

// complile using: g++ 01_emptyWindow.cpp -o 01_emptyWindow -framework OpenGL -framework GLUT -w
// (yes, the -w is bad practice, but get some useless warnings otherwise)

// although this is for OSX I will still try to keep the code portable hence the ifdef
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void render(void)
{
}

int main(int argc, char ** argv)
{
   glutInit(&argc, argv);
   glutInitWindowPosition(100, 100);
   glutInitWindowSize(500, 500);
   glutCreateWindow("Simple Window");
   glutDisplayFunc(render);
   glutMainLoop();

   return 1;
}
