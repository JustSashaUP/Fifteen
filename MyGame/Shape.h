#ifndef Shape_h
#define Shape_h
namespace CubeGame {
	class Shape
	{
	private:
		float xSize, ySize, zSize;//розміри
		float xCenter, yCenter, zCenter; //координати центру сцени
		float* diffColor, * ambiColor, * specColor; // кольори
	public:
		Shape(float xSize, float ySize, float zSize,
			float xCenter, float yCenter, float zCenter,
			float* diffColor, float* ambiColor, float* specColor);
		~Shape() { }
		// Функції доступу:
		float getXSize() const { return xSize; }
		float getYSize() const { return ySize; }
		float getZSize() const { return zSize; }
		void setXSize(float xSize) { this->xSize = xSize; }
		void setYSize(float ySize) { this->ySize = ySize; }
		void setZSize(float zSize) { this->zSize = zSize; }
		void setSize(float xSize, float ySize, float zSize);
		float getXCenter() const { return xCenter; }
		float getYCenter() const { return yCenter; }
		float getZCenter() const { return zCenter; }
		void setXCenter(float xCenter) { this->xCenter = xCenter; }
		void setYCenter(float yCenter) { this->yCenter = yCenter; }
		void setZCenter(float zCenter) { this->zCenter = zCenter; }
		void setCoords(float xCenter, float yCenter, float zCenter);
		float* getDiffColor() const { return diffColor; }
		float* getAmbiColor() const { return ambiColor; }
		float* getSpecColor() const { return specColor; }
		void   setDiffColor(float* diffColor) { this->diffColor = diffColor; }
		void   setAmbiColor(float* ambiColor) { this->ambiColor = ambiColor; }
		void   setSpecColor(float* specColor) { this->specColor = specColor; }
		void   setColors(float* diffColor, float* ambiColor, float* specColor);
		virtual void draw() = 0; // ця функція повинна бути перекрита у похідних класах
	};
}
#endif

