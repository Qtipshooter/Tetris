// Tetris Program main.cpp
// Quinton Graham 2025

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <iostream>

int main(int argc, char* argv[]) {
  
  // Initial SDL setup
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window * window;
  bool quit_signal = false;

  window = SDL_CreateWindow(
    "Tetris",
    640,
    480,
    SDL_WINDOW_INPUT_FOCUS
  );

  // Main loop
  while (!quit_signal) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_EVENT_QUIT) {
        quit_signal = true;
      }
      if (event.type == SDL_EVENT_KEY_DOWN) {
        if(event.key.key == SDLK_ESCAPE){
          quit_signal = true;
        }
      }
    }
    // Main Loop Iteration
  }

  SDL_DestroyWindow(window);
  SDL_Quit();
  // Exit App
  return 0;
}