all: game run

main.o: main.cpp
	g++ -c main.cpp

game.o: game.cpp
	g++ -c game.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

scene.o: scene.cpp
	g++ -c scene.cpp

game: main.o game.o menu.o scene.o
	g++ *.o -o game -L./raylib/lib -l:libraylib.a -lopengl32 -lgdi32 -lwinmm

run: game
	./game
