#include <gl/glut.h>
#include "utils.h"
#include "Board.h"

namespace CubeGame {
    void Board::draw()
    {
        glMaterialfv(GL_FRONT, GL_AMBIENT, getAmbiColor());
        glMaterialfv(GL_FRONT, GL_DIFFUSE, getDiffColor());
        glMaterialfv(GL_FRONT, GL_SPECULAR, getSpecColor());
        glMaterialf(GL_FRONT, GL_SHININESS, GraphUtils::shininess);

        glTranslatef(getXCenter(), getYCenter(), getZCenter());
        GraphUtils::parallelepiped(getXSize(), getYSize(), getZSize());
    }
}