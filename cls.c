// This calls the library required for clearing the screen.
#include <stdio.h>
#include <stdlib.h>

// Creates a function that clear the screen using external shell scripting.
void shell_clear() {
  system("clear");
}

// Creates a function that allows you to clear the screen using ansi control sequences.
void ansi_clear() {

  // \e is the escape character (ASCII code 27)
  // [ begins the ANSI control sequence
  // 1;1 specifies row 1, column 1
  // H indicates cursor movement

  // \e[ starts another ANSI control sequence
  // 2J clears the screen

  // These two commands do not need to be merged. Do not merge them.
  printf("\e[1;1H \e[2J");
}

int main() {
  //ansi_clear();
  shell_clear();
  
  //printf("Hello World\n");

  return 0;
}
