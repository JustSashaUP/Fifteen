#include <gl/glut.h>
#include "Cube.h"
#include "utils.h"

namespace CubeGame {
    void Cube::draw() 
    {
        glMaterialfv(GL_FRONT, GL_AMBIENT, getAmbiColor());
        glMaterialfv(GL_FRONT, GL_DIFFUSE, getDiffColor());
        glMaterialfv(GL_FRONT, GL_SPECULAR, getSpecColor());
        glMaterialf(GL_FRONT, GL_SHININESS, GraphUtils::shininess);

        glPushMatrix();
        glTranslatef(getXCenter(), getYCenter(), getZCenter());
        glutSolidCube(getXSize());
        glPopMatrix();
    }
}