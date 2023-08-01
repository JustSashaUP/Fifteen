#include "Shape.h"

namespace CubeGame {
	Shape::Shape(float xSize, float ySize, float zSize,
		         float xCenter, float yCenter, float zCenter,
		         float* diffColor, float* ambiColor, float* specColor) {
		setSize(xSize, ySize, zSize);
		setCoords(xCenter, yCenter, zCenter);
		setColors(diffColor, ambiColor, specColor);
	}
	void Shape::setSize(float xSize, float ySize, float zSize) {
		setXSize(xSize);
		setYSize(ySize);
		setZSize(zSize);
	}
	void Shape::setCoords(float xCenter, float yCenter, float zCenter) {
		setXCenter(xCenter);
		setYCenter(yCenter);
		setZCenter(zCenter);
	}
	void Shape::setColors(float* diffColor, float* ambiColor, float* specColor) {
		setDiffColor(diffColor);
		setAmbiColor(ambiColor);
		setSpecColor(specColor);
	}
}