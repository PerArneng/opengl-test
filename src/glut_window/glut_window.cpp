#include <GLUT/glut.h>

void display(void) {
    

    
}

void reshape(int width, int height) {
    
    
}

void idle(void) {
    
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    
    //a basic set up...
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-640)/2,
                           (glutGet(GLUT_SCREEN_HEIGHT)-480)/2);
    
    //create the window, the argument is the title
    glutCreateWindow("GLUT Hello, World");
    
    //pass the callbacks
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    
    glutMainLoop();
    
    //we never get here because glutMainLoop() is an infinite loop
    return 0;
}