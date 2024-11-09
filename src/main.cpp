#include "login/login.cpp"
#include "main_window/main_window.cpp"
// #include <iostream>
#include <ncurses.h>
// #include <vector>
using namespace std;
int main() {
  // init ncurses screen (the login has the color staring maybe i have to do
  // this here)
  initscr();
  raw();
  keypad(stdscr, TRUE);

  // starting login              /* i have the idea to put login as a bool to
  // unlock the program */
  login();
  refresh();

  // starting all the components in the principal window
  main_window();
  refresh();

  getch();
  endwin();

  return 0;
}
