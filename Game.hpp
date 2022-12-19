#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
using namespace std;

class Game {
    public:
        Game();         //constructor
        ~Game();        //destructor     

        void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
        
        void handleEvents();
        void update(); //to update game objects
        void render(); //to render them
        void clean();

        static SDL_Renderer *renderer;

        bool running() {return isRunning;}

    private:
        int cnt = 0;
        bool isRunning;
        SDL_Window *window;
        
};

#endif /* Game_hpp */