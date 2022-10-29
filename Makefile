all:
	g++ -I deps/include -L deps/lib -o main main.cpp CApp.cpp -lmingw32 -l SDL2main -lSDL2