#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char *argv[]){

    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game;
    game->init("BirchEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);

    while (game->running()) {

        frameStart = SDL_GetTicks(); //to sync frame rate to 60 fps

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if(frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime); //locks movement to a max of 60 fps
        }
    }

    game->clean();

    return 0;
}
