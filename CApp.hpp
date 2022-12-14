#ifndef CAPP_HPP
#define CAPP_HPP
#include <SDL2/SDL.h>

class CApp
{
    public:
        CApp();
        int OnExecute();
        bool OnInit();
        void OnEvent(SDL_Event *event);
        void OnLoop();
        void OnRender();
        void OnExit();
    private:
        bool isRunning;
        SDL_Window *pWindow;
        SDL_Renderer *pRenderer;        
};
#endif