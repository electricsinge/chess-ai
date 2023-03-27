#include <SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow(
        "Chess Board",                          // Window title
        SDL_WINDOWPOS_UNDEFINED,              // Initial x position
        SDL_WINDOWPOS_UNDEFINED,              // Initial y position
        640,                                  // Width, in pixels
        480,                                  // Height, in pixels
        SDL_WINDOW_OPENGL                     // Flags
    );

    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    // Wait for 5 seconds
    SDL_Delay(5000);

    // Destroy window
    SDL_DestroyWindow(window);

    // Quit SDL subsystems
    SDL_Quit();

    return 0;
}
