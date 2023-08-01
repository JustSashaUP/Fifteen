#ifndef Scene_h
#define Scene_h

#include "Shape.h"
#include "Cube.h"
#include <vector>

namespace CubeGame
{

    const int M = 4, N = 4;         // кількість рядків та колонок поля

    class Scene
    {
        std::vector<Shape*> shapes; // "гнучкий" масив указівників на елементи гри
        float xStep, zStep;         // Відступи між кубами
        float width, height;        // Розміри вікна
        float mouseX, mouseY;       // поточні координати курсора
        float angleX, angleY;       // поточний кут повороту сцени
        float WorldDistZ;           // положення по Z
        int button;                 // натиснута кнопка
        bool finish;                // ознака того, що гру завершено
        int time;                   // поточний час у секуднах
        int minute;
        int hour;
        int count;
        Cube* cubes[N*M];
        int cubeArr[M][N];
        int xFrom, zFrom;     
        int xTo, zTo;    
    public:
        Scene(float xStep, float yStep);
        ~Scene();
        void on_paint();                                   // отрисовка игры
        void on_size(int width, int height);               // розміри вікна
        void on_motion(int x, int y);                      // дія при натиснені кнопок
        void on_mouse(int button, int state, int x, int y);// натиск кнопок
        void on_timer(int value);                          // таймер (для fps и рандомной растановки кубов
        void on_special(int key, int x, int y);
    private:
        void Initialize();                                 // ф-я ініціалізації
        void allocateCubes();
        bool moveCubes(int xFrom, int zFrom, int xTo, int zTo);
        bool findNearest(int x, int z, int& x1, int& z1);
        void fillingArr();
        void checkFinish();
        float allocX(int x);
        float allocZ(int z);
    };

}

#endif