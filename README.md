# Ffiteen_game_FirstYearStudent
Coursework on the topic of the game "fifteen" using the FreeGlut (OpenGL) on C++ language

First of all you need download FreeGlut library on your PC:
1. https://www.transmissionzero.co.uk/software/freeglut-devel/ Click here (01.08.23);
2. Download freeglut 3.0.0 for MSVC (with PGP signature and PGP key)
3. freeglut/bin/freeglut.dll --->	...\Windows\system32\
4. freeglut/include/GL/ (all files) --->	...\Program Files (x86)\Windows Kits\10\Include\<LAST_VERSION>\um\gl\
5. freeglut/lib/freeglut.lib --->	...\Program Files (x86)\Windows Kits\10\Lib\<LAST_VERSION>\um\x86\

If the freeglut.dll file cannot be located in the ...\Windows\system32\ folder, this file can be copied to the project's Debug folder each time.
Similarly, other files can be placed in the project folder next to the raw code files, but then you should replace <gl/glut.h> with "glut.h" in the #include directive in the examples below.
