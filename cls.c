// This calls the library required for clearing the screen.
#include <unistd.h>

// Defines what clear does specifically.
#define CLEAR "clear"

// Creates a function that allows you to clear the screen.
void clear_screen() {
  system(CLEAR);
}
