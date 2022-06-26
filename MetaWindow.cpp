#include <iostream>
#include "SDL.h"
 
// Unbedingt mit argc und argv, da es sonst
// mit MinGW wahrscheinlich nicht kompiliert.
int main( int argc, char **argv )
{
  // Video und Timersubsystem initialisieren
  if( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_TIMER ) )
  {
    // Irgendwas ist schiefgegangen. SDL_GetError weiß mehr
    std::cerr << "Konnte SDL nicht initialisieren: " << SDL_GetError() << std::endl;
    return 1;
  }
 
  // SDL_Quit registrieren
  atexit(&SDL_Quit);
 
  std::cout << "Dieses Mal ein freudiges Hello SDL!" << std::endl;
 
  return 0;
}