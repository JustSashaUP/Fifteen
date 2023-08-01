#ifndef Board_h
#define Board_h

#include "shape.h"

namespace CubeGame
{
    // Клас, який відповідає за малювання дошки (поля гри)
    class Board : public Shape
    {
    public:
        Board(float xSize, float ySize, float zSize,
            float xCenter, float yCenter, float zCenter,
            float* diffColor, float* ambiColor, float* specColor)
            : Shape(xSize, ySize, zSize,
                xCenter, yCenter, zCenter,
                specColor, diffColor, ambiColor) { }
        virtual void draw();
    };

}
#endif
