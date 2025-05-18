CXXFLAGS := -L./raylib/lib -l:libraylib.a -lopengl32 -lgdi32 -lwinmm -O2 -mwindows 

all: game run

main.o: main.cpp
	g++ -c main.cpp

game.o: game.cpp
	g++ -c game.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

scene.o: scene.cpp
	g++ -c scene.cpp

mode.o: mode.cpp
	g++ -c mode.cpp

misc.o: misc.cpp
	g++ -c misc.cpp

timer.o: timer.cpp
	g++ -c timer.cpp

game: main.o game.o menu.o scene.o mode.o misc.o timer.o
	g++ *.o -o game $(CXXFLAGS)
	 
run: game
	./game
