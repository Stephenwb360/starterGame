all:
	g++ -I src/SDL2/include -L src/SDL2/lib -o main main.cpp Game.cpp TextureManager.cpp GameObject.cpp Map.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image