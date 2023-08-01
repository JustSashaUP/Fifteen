#ifndef Cube_h
#define Cube_h
#include "shape.h"
namespace CubeGame {
	class Cube : public Shape {
	public:
		Cube(float xCenter, float yCenter, float zCenter,
			float xSize, float ySize, float zSize,
			float* diffColor, float* ambiColor, float* specColor)
			: Shape(xCenter, yCenter, zCenter, xSize, ySize, zSize,
				specColor, diffColor, ambiColor) { }
		virtual void draw();
	};
}
#endif